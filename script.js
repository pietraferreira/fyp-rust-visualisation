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

function involvesOwnershipTransfer(node) {
    // Initialize as false; we'll turn this true if we detect an actual ownership transfer
    let transferDetected = false;

    // Ownership transfer in Rust can be more complex than just assigning identifiers.
    // We need to check for cases that are not simply mutable or immutable borrows.
    if (node.type === 'let_declaration' && node.children.length > 1) {
        const rhs = node.children.find(child => child.type === 'expression' || child.type === 'call_expression');
        
        // This checks for direct ownership transfers, like when using functions that return a value
        // that isn't borrowed but owned (e.g., String::from())
        if (rhs && (rhs.type === 'call_expression' || rhs.type === 'assignment_expression')) {
            transferDetected = true;
        }

        // Additionally, check for cases where there is a direct assignment that doesn't involve borrowing
        if (rhs && rhs.type === 'identifier' && !rhs.text.includes('&') && !rhs.text.includes('&mut ')) {
            // This might be too simplistic as it assumes any identifier assignment is an ownership transfer,
            // which might not always be the case. Further refinement could be necessary based on your needs.
            transferDetected = true;
        }
    }

    // Return whether an ownership transfer was detected
    return transferDetected;
}

//function involvesOwnershipTransfer(node) {
//    let transferDetected = false;
//
//    // Focus on let_declaration nodes since they're relevant to ownership transfer
//    if (node.type === 'let_declaration' && node.children.length > 1) {
//        // The RHS of the assignment (the value being assigned) is crucial
//        const rhs = node.children[1]; // Assuming the RHS is always the second child for simplicity
//
//        // Check if the RHS is an identifier, which could indicate a potential ownership transfer
//        // This assumes that the presence of an identifier (variable name) as RHS implies a transfer
//        if (rhs.type === 'identifier') {
//            // Confirm it's an assignment from one variable to another (not a literal or a function call)
//            transferDetected = true;
//        }
//    }
//
//    return transferDetected;
//}

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
//        const transfer = involvesOwnershipTransfer(node, sourceCode);
//        if (transfer) {
//            console.log('Ownership transfer detected!')
//            return `<span ${ownershipStyle}>${text}</span>`; // Directly return if ownership transfer is detected
//        }
//    
//        // Then, check for mutable specifier presence for mutability.
//        style = immutableBorrowStyle; // Default to immutable borrow style.
//        console.log('Checking for mutability:', node.type, node.children)
//        if (node.type === 'let_declaration' && node.children.some(child => child.type === 'mutable_specifier')) {
//            console.log('Mutable specifier found!')
//            style = mutableBorrowStyle; // If mutable specifier found, apply mutable borrow style.
//        }
        console.log('Node Type:', node.type, 'Is Immutable Borrow:', isImmutableBorrow(node));
        console.log('Node Type:', node.type, 'Is Mutable Borrow:', isMutableBorrow(node));
        if (involvesOwnershipTransfer(node)) {
            style = ownershipStyle;
        } else if (isMutableBorrow(node)) {
            style = mutableBorrowStyle;
        } else if (isImmutableBorrow(node)) {
            style = immutableBorrowStyle;
        } else {
            return text;
        }
    
        return `<span ${style}>${text}</span>`;
    }

    function isImmutableBorrow(node) {
        // Directly check if the node is a reference_expression with a mutable_specifier
        if (node.type === 'reference_expression') {
            return node.children.some(child => child.type === 'mutable_specifier');
        }
        // Recurse through children to find a mutable borrow deeper in the tree
        return node.children && node.children.some(child => isMutableBorrow(child));
    }

    function isMutableBorrow(node) {
        // An immutable borrow would be a reference_expression without a mutable_specifier
        if (node.type === 'reference_expression') {
            return !node.children.some(child => child.type === 'mutable_specifier');
        }
        // Recurse through children to find an immutable borrow deeper in the tree
        return node.children && node.children.some(child => isImmutableBorrow(child));
    }

    function highlightNode(node) {
        let result = '';
        //console.log(node.type, node.startIndex, node.endIndex)
        if (['let_declaration', 'reference_expression', 'assignment_expression'].includes(node.type)) {
            const text = sourceCode.substring(node.startIndex, node.endIndex);
            console.log('we will check this:', text)
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