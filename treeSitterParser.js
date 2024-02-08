const TreeSitter = require('web-tree-sitter'); 

async function parseWithTreeSitter(codeSnippet) {
    await TreeSitter.init();
    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);

    const tree = parser.parse(codeSnippet);
    return tree; 
}

module.exports = { parseWithTreeSitter };

