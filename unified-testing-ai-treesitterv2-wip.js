const { analyseWithTreeSitter } = require('./treeSitterAnalysis');
const { analyseWithAI } = require('./aiAnalysis');

async function runComparisonTests() {
  const testCases = [
    {
      description: "Simple immutable borrow",
      code: `fn main() { let x = 5; let y = &x; println!("{}", y); }`,
      expected: { immutableBorrow: [2], mutableBorrow: [], ownershipTransfer: [] }
    },
  ];

  for (const testCase of testCases) {
    console.log(`\nAnalyzing: ${testCase.description}`);
    
    // Tree-sitter Analysis
    const treeSitterResults = await analyseWithTreeSitter(testCase.code);
    console.log("TreeSitter Results:", treeSitterResults);

    // AI Analysis
    const aiResults = await analyseWithAI(testCase.code);
    console.log("AI Analysis Results:", aiResults);

    // compare and Evaluate
    const compareResults = (expected, actual) => JSON.stringify(expected.sort()) === JSON.stringify(actual.sort());

    console.log("Comparison Results:");
    console.log("  Immutable Borrow Match:", compareResults(testCase.expected.immutableBorrow, treeSitterResults.immutableBorrow) ? "TreeSitter" : "AI");
    console.log("  Mutable Borrow Match:", compareResults(testCase.expected.mutableBorrow, treeSitterResults.mutableBorrow) ? "TreeSitter" : "AI");
    console.log("  Ownership Transfer Match:", compareResults(testCase.expected.ownershipTransfer, treeSitterResults.ownershipTransfer) ? "TreeSitter" : "AI");
  }
}

runComparisonTests();