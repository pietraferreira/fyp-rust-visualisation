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
      // Adjust lineNum to correctly align with the one-based line numbers
      const lineNum = child.startPosition.row + 1; // Convert to one-based line number
      const lines = code.split('\n');
      const lineContent = lines[lineNum - 1] ? lines[lineNum - 1].trim() : '';

      // Debug: Print the line number and content being analyzed
      //console.log(`Analyzing line ${lineNum}: ${lineContent}`);

      if (child.type === 'let_declaration' && child.text.includes('=') && !child.text.includes('&')) {
        //console.log(`Ownership transfer detected at line ${lineNum}`);
        analysisResults.ownership_transfer.push(lineNum);
      }

      if (child.type === 'reference_expression') {
        if (child.text.includes('&mut ')) {
          //console.log(`Mutable borrow detected at line ${lineNum}`);
          analysisResults.mutable_borrow.push(lineNum);
        } else if (child.text.includes('&') && !child.text.includes('&mut ')) {
          //console.log(`Immutable borrow detected at line ${lineNum}`);
          analysisResults.immutable_borrow.push(lineNum);
        }
      }

      traverse(child);
    }
  }

  traverse(tree.rootNode);

  // Deduplicate and sort results
  Object.keys(analysisResults).forEach(key => {
    analysisResults[key] = [...new Set(analysisResults[key])].sort((a, b) => a - b);
  });

  return analysisResults;
}

module.exports = { analyseWithTreeSitter };
