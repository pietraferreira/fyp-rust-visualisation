const { initTreeSitter } = require('./treeSitterParser'); 
const { parseWithChatGPT } = require('./chatgpt'); 

describe('Parser Comparison', () => {
  let parser;

  beforeAll(async () => {
    parser = await initTreeSitter();
  });

  const rustCodeExamples = [
    {
      description: "Immutable borrow",
      code: `fn borrow_immutable(s: &String) -> usize { s.len() }`,
      check: (node) => node.type === 'reference_expression' && !node.text.includes("mut")
    },
    {
      description: "Mutable borrow",
      code: `fn borrow_mutable(s: &mut String) { s.push_str(" world"); }`,
      check: (node) => node.type === 'reference_expression' && node.text.includes("mut")
    },
    {
      description: "Ownership transfer",
      code: `fn takes_ownership(s: String) { println!("{}", s); }`,
      check: (node) => node.type === 'parameter' && !node.text.includes("&")
    }
  ];

  rustCodeExamples.forEach(({ description, code, check }) => {
    test(`Tree-sitter correctly identifies ${description}`, () => {
      const tree = parser.parse(code);
      let isCorrect = false;

      // Simplified traversal to find a node that matches our check criteria
      tree.rootNode.walk((node) => {
        if (check(node)) {
          isCorrect = true;
          return false; // Stop walking the tree
        }
        return true; // Continue walking
      });

      expect(isCorrect).toBe(true);
    });

    test(`ChatGPT correctly identifies ${description}`, async () => {
      // Simulate calling ChatGPT and checking its response
      const response = await parseWithChatGPT(code);
      // Implement logic similar to interpretChatGPTResponse from previous examples
      const isCorrect = response.includes(description); // Simplified check
      expect(isCorrect).toBe(true);
    });
  });
});
