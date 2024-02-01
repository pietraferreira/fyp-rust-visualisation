async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    return parser;
}

// Function to generate the highlighted HTML from the syntax tree
function generateHighlightedHTML(node, sourceCode) {
    if (node.type === 'reference_expression' || node.type === 'mutable_specifier') { // Simple example: Highlight references and mutable specifiers
        const htmlBeforeNode = sourceCode.substring(0, node.startIndex);
        const nodeHtml = `<span style="background-color: yellow;">${sourceCode.substring(node.startIndex, node.endIndex)}</span>`;
        const htmlAfterNode = sourceCode.substring(node.endIndex);
        return htmlBeforeNode + nodeHtml + htmlAfterNode;
    } else {
        let currentSourceCode = sourceCode;
        node.children.forEach(child => {
            currentSourceCode = generateHighlightedHTML(child, currentSourceCode);
        });
        return currentSourceCode;
    }
}

document.addEventListener('DOMContentLoaded', async () => {
    const parser = await initTreeSitter();

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        // Update the overlay with highlighted HTML
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);
    });

    // Update overlay whenever the code input changes
    document.getElementById('codeInput').addEventListener('input', function() {
        document.getElementById('codeOutput').textContent = this.value;
    });
});
