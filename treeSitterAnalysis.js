const TreeSitter = require('web-tree-sitter');

async function analyseWithTreeSitter(code) {
  await TreeSitter.init();
  const parser = new TreeSitter();
  const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
  parser.setLanguage(RustFYP);

  const tree = parser.parse(code);
  let analysisResults = {
    immutable_borrow: [],
    mutable_borrow: [],
    ownership_transfer: []
  };

  function traverse(node) {
    for (const child of node.children) {
      const lineNum = child.startPosition.row;
      const lineContent = code.split('\n')[lineNum - 1].trim();

      // Debug: Print the line number and content being analyzed
      console.log(`Analyzing line ${lineNum}: ${lineContent}`);

      if (child.type === 'let_declaration' && child.text.includes('=') && !child.text.includes('&')) {
        console.log(`Ownership transfer detected at line ${lineNum}`);
        analysisResults.ownershipTransfer.push(lineNum);
      }

      if (child.type === 'reference_expression') {
        if (child.text.includes('&mut ')) {
          console.log(`Mutable borrow detected at line ${lineNum}`);
          analysisResults.mutableBorrow.push(lineNum);
        } else if (child.text.includes('&') && !child.text.includes('&mut ')) {
          console.log(`Immutable borrow detected at line ${lineNum}`);
          analysisResults.immutableBorrow.push(lineNum);
        }
      }

      traverse(child);
    }
  }

  traverse(tree.rootNode);

  Object.keys(analysisResults).forEach(key => {
    analysisResults[key] = [...new Set(analysisResults[key])].sort((a, b) => a - b);
  });

  return analysisResults;
}

module.exports = { analyseWithTreeSitter };
