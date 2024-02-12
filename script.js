async function initTreeSitter() {
    await TreeSitter.init();
    console.log('TreeSitter initialized');

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);
    console.log('Language set:', RustFYP);

    return parser;
}

function involvesOwnershipTransfer(node) {
    // Check if the node is a let_declaration
    if (node.type === 'let_declaration') {
        // Check for direct assignment that's not a borrowing
        const hasDirectAssignment = node.children.some(child => 
            child.type === 'identifier' || child.type === 'call_expression'); // Simplified for clarity

        const isBorrowing = node.children.some(child => 
            child.type === 'reference_expression'); // Checks for any borrowing

        return hasDirectAssignment && !isBorrowing;
    }
    // Recursively check children for deeper ownership transfers
    return node.children && node.children.some(child => involvesOwnershipTransfer(child));
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

    function isMutableBorrow(node) {
        // Check for a mutable borrow by looking for a reference_expression that includes a mutable_specifier
        if (node.type === 'reference_expression') {
            return node.children.some(child => child.type === 'mutable_specifier');
        }
        // Recursively check children
        return node.children && node.children.some(child => isMutableBorrow(child));
    }
    
    function isImmutableBorrow(node) {
        // Check for an immutable borrow by looking for a reference_expression without a mutable_specifier
        if (node.type === 'reference_expression') {
            return node.children.every(child => child.type !== 'mutable_specifier');
        }
        // Recursively check children
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

document.getElementById('parseButton').addEventListener('click', async () => {
    const code = document.getElementById('codeInput').value;
    // Call Tree-sitter parsing as before

    // Now, also send the code to your backend for AI analysis
    fetch('http://localhost:3000/analyze-code', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({ codeSnippet: code }),
    })
    .then(response => response.json())
    .then(data => {
        // Assuming you have a place to show AI analysis results
        document.getElementById('aiAnalysisOutput').innerText = data.analysis;
    })
    .catch(error => console.error('Error analyzing code with AI:', error));
});
