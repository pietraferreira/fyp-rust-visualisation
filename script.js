async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    return parser;
}

function generateHighlightedHTML(node, sourceCode) {
    // Define styles
    const ownershipStyle = `style="background-color: lightblue;"`;
    const immutableBorrowStyle = `style="background-color: lightgreen;"`;
    const mutableBorrowStyle = `style="background-color: pink;"`;

    function applyStyle(nodeType, text) {
        if (nodeType === 'mutable_specifier') {
            // Check the context to see if this is part of a reference expression
            return `<span ${mutableBorrowStyle}>${text}</span>`;
        } else if (nodeType === 'reference_expression') {
            // Determine if the reference is mutable or immutable by inspecting the text or additional node information
            const isMutable = text.includes("&mut");
            const style = isMutable ? mutableBorrowStyle : immutableBorrowStyle;
            return `<span ${style}>${text}</span>`;
        } else if (nodeType === 'assignment_expression' || nodeType === 'let_declaration') {
            return `<span ${ownershipStyle}>${text}</span>`;
        }
        // Default to no specific styling
        return text;
    }

    function highlightNode(node) {
        let result = '';
        if (['reference_expression', 'mutable_specifier', 'assignment_expression', 'let_declaration'].includes(node.type)) {
            // Apply specific styling based on the node type
            result += applyStyle(node.type, sourceCode.substring(node.startIndex, node.endIndex));
        } else {
            // For other node types, process their children
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

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        // Update the codeOutput with highlighted HTML based on the syntax tree
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);
    });
});
