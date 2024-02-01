async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    return parser;
}

function traverseNode(node) {
    let type = node.type;
    let text = node.isNamed() ? node.text : null;
    let children = node.children.map(traverseNode);

    return { type, text, children };
}

document.addEventListener('DOMContentLoaded', async () => {
    const parser = await initTreeSitter();

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        const readableTree = traverseNode(tree.rootNode);

        document.getElementById('parseResult').textContent = JSON.stringify(readableTree, null, 2);
    });
});
