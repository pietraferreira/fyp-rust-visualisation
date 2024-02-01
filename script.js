async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    return parser;
}

function generateHighlightedHTML(node, sourceCode) {
    // Define different styles for ownership, immutable borrow, and mutable borrow
    const ownershipStyle = `style="background-color: lightblue;"`; // Ownership
    const immutableBorrowStyle = `style="background-color: lightgreen;"`; // Immutable borrow
    const mutableBorrowStyle = `style="background-color: pink;"`; // Mutable borrow

    // Helper function to apply the appropriate style
    function applyStyle(nodeType, text) {
        switch (nodeType) {
            case 'assignment_expression':
            case 'let_declaration': // Simplified assumption for ownership transfer
                return `<span ${ownershipStyle}>${text}</span>`;
            case 'reference_expression': // Assuming this indicates an immutable borrow
                return `<span ${immutableBorrowStyle}>${text}</span>`;
            case 'mutable_specifier': // Part of a mutable borrow expression
                return `<span ${mutableBorrowStyle}>${text}</span>`;
            default:
                return text; // No specific styling
        }
    }

    // Recursive function to traverse and highlight the syntax tree
    function highlightNode(node) {
        let result = '';
        if (node.type === 'reference_expression' || node.type === 'mutable_specifier' || node.type === 'assignment_expression' || node.type === 'let_declaration') {
            // Apply specific styling based on the node type
            result += applyStyle(node.type, sourceCode.substring(node.startIndex, node.endIndex));
        } else {
            // For other node types, process their children
            let lastIndex = node.startIndex;
            node.children.forEach((child) => {
                // Add unhighlighted text between nodes
                result += sourceCode.substring(lastIndex, child.startIndex);
                // Recursively highlight child nodes
                result += highlightNode(child);
                lastIndex = child.endIndex;
            });
            // Add any remaining unhighlighted text after the last child
            result += sourceCode.substring(lastIndex, node.endIndex);
        }
        return result;
    }

    return highlightNode(node);
}

document.addEventListener('DOMContentLoaded', async () => {
    const parser = await initTreeSitter();

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        // Update the codeOutput with highlighted HTML based on the syntax tree
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);
    });
});
