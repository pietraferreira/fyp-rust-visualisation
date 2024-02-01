async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    return parser;
}

function generateHighlightedHTML(node, sourceCode) {
    // Define the start and end tags for highlighting
    const highlightStartTag = `<span style="background-color: yellow;">`;
    const highlightEndTag = `</span>`;

    // Function to recursively traverse and highlight the syntax tree
    function highlightNode(node) {
        let result = '';
        if (node.type === 'reference_expression' || node.type === 'mutable_specifier') {
            // Directly highlight references and mutable specifiers
            result += highlightStartTag + sourceCode.substring(node.startIndex, node.endIndex) + highlightEndTag;
        } else if (node.type === 'assignment_expression' || node.type === 'let_declaration') {
            // Highlight entire declarations and assignments for ownership transfer
            result += highlightStartTag + sourceCode.substring(node.startIndex, node.endIndex) + highlightEndTag;
        } else {
            // For other types, recurse on children
            let lastIndex = node.startIndex;
            node.children.forEach((child) => {
                // Add unhighlighted text
                result += sourceCode.substring(lastIndex, child.startIndex);
                // Recursively highlight child
                result += highlightNode(child);
                lastIndex = child.endIndex;
            });
            // Add any remaining unhighlighted text
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
        // Generate and display the highlighted HTML in the output area
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);
    });
});

