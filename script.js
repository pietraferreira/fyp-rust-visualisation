async function initTreeSitter() {
    await TreeSitter.init();
    console.log('TreeSitter initialized');

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);
    console.log('Language set:', RustFYP);

    return parser;
}

function isMutableReference(node) {
    // base case
    if (node.type === 'mutable_specifier') {
        return true;
    }
    
    // if the node has children, iterate to find mutability
    if (node.children.length > 0) {
        for (let i = 0; i < node.children.length; i++) {
            if (isMutableReference(node.children[i])) {
                return true;
            }
        }
    }
    
    return false;
}

function involvesOwnershipTransfer(node, sourceCode) {
    // Initially assume no ownership transfer is detected
    let transferDetected = false;

    // Specifically target let_declaration nodes for potential ownership transfer
    if (node.type === 'let_declaration') {
        // Assuming the second child of a let_declaration is the RHS of the assignment
        const rhs = node.children.length > 1 ? node.children[1] : null;

        // Ownership transfer is more likely when RHS is an identifier that's not part of a new expression or literal
        if (rhs && rhs.type === 'identifier') {
            // Further refine to exclude cases where RHS is a direct value assignment like a literal or a function call
            const rhsText = sourceCode.substring(rhs.startIndex, rhs.endIndex);

            // Exclude direct assignments (e.g., literals, new instances) by checking if RHS text is a simple identifier
            if (!rhsText.match(/^\d+$/) && !rhsText.includes("::") && !rhsText.startsWith('&')) {
                // This suggests RHS is a variable name, potentially indicating an ownership transfer
                transferDetected = true;
            }
        }
    }

    return transferDetected;
}

function generateHighlightedHTML(node, sourceCode) {
    // Define styles with data-analysis for detailed explanations
    const styleTemplate = (color, analysis) => `style="background-color: ${color};" data-analysis="${analysis}"`;

    // Explanation templates
    const ownershipStyle = styleTemplate("lightblue", "Ownership is established or transferred.");
    const immutableBorrowStyle = styleTemplate("lightgreen", "Immutable borrow, allowing read-only access.");
    const mutableBorrowStyle = styleTemplate("pink", "Mutable borrow, allowing modification.");

    function applyStyle(node, text, sourceCode) {
        let style = "";
    
        // First, check for ownership transfer before mutable/immutable classification
        const transfer = involvesOwnershipTransfer(node, sourceCode);
        if (transfer) {
            console.log('Ownership transfer detected!')
            return `<span ${ownershipStyle}>${text}</span>`; // Directly return if ownership transfer is detected
        }
    
        // Then, check for mutable specifier presence for mutability.
        style = immutableBorrowStyle; // Default to immutable borrow style.
        console.log('Checking for mutability:', node.type, node.children)
        if (node.type === 'let_declaration' && node.children.some(child => child.type === 'mutable_specifier')) {
            console.log('Mutable specifier found!')
            style = mutableBorrowStyle; // If mutable specifier found, apply mutable borrow style.
        }
    
        return `<span ${style}>${text}</span>`;
    }
    function highlightNode(node) {
        let result = '';
        //console.log(node.type, node.startIndex, node.endIndex)
        if (['let_declaration', 'reference_expression', 'assignment_expression'].includes(node.type)) {
            const text = sourceCode.substring(node.startIndex, node.endIndex);
            console.log('we will highlight this:', text)
            result += applyStyle(node, text, sourceCode);
        } else {
            let lastIndex = node.startIndex;
            node.children.forEach((child) => {
                result += sourceCode.substring(lastIndex, child.startIndex);
                result += highlightNode(child);
                lastIndex = child.endIndex;
            });
            result += sourceCode.substring(lastIndex, node.endIndex);
        }
        return result;
    }

    return highlightNode(node);
}

document.addEventListener('DOMContentLoaded', async () => {
    const parser = await initTreeSitter();
    console.log('DOM content loaded');

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        console.log('Code input:', code);
        const tree = parser.parse(code);
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);

        // Attach event listeners for newly created spans for hover analysis
        document.querySelectorAll('#codeOutput span').forEach(span => {
            span.addEventListener('mouseover', (event) => {
                const analysisText = event.target.getAttribute('data-analysis');
                console.log('Hovered span:', event.target);
                console.log('Analysis text:', analysisText);
                document.getElementById('detailedAnalysis').style.display = 'block';
                document.getElementById('analysisText').textContent = analysisText;
            });
            span.addEventListener('mouseout', () => {
                console.log('Mouse out');
                document.getElementById('detailedAnalysis').style.display = 'none';
                document.getElementById('analysisText').textContent = '';
            });
        });
    });
});