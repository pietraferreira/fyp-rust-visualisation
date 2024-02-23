const { analyseWithTreeSitter } = require('./treeSitterAnalysis');
const { analyseWithAI } = require('./aiAnalysis');

function normalizeAIResults(aiResults) {
    const standardizedResults = {
      immutable_borrow: aiResults.immutable_borrows || aiResults.immutable_borrow || [],
      mutable_borrow: aiResults.mutable_borrows || aiResults.mutable_borrow || [],
      ownership_transfer: aiResults.ownership_transfers || aiResults.ownership_transfer || []
    };
  
    // Ensure all values are arrays (in case the AI provides a single number instead of an array)
    Object.keys(standardizedResults).forEach(key => {
      if (!Array.isArray(standardizedResults[key])) {
        standardizedResults[key] = [standardizedResults[key]];
      }
    });
  
    return standardizedResults;
}  

function compareResults(expected, actual) {
    // Ensure both expected and actual are arrays
    expected = Array.isArray(expected) ? expected : [];
    actual = Array.isArray(actual) ? actual : [];
  
    // Sort both arrays for a consistent comparison
    return JSON.stringify(expected.sort()) === JSON.stringify(actual.sort());
}  

async function runComparisonTests() {
    const codeSnippet = `fn main() {
         let x = 5; 
         let y = &x; 
         println!("{}", y); 
        }`;
  
    // TreeSitter Analysis
    console.log("Analyzing code snippet with TreeSitter:");
    const treeSitterResults = await analyseWithTreeSitter(codeSnippet);
    console.log("TreeSitter Results:", treeSitterResults);
  
    // AI Analysis
    console.log("\nAnalyzing the same code snippet with AI:");
    const aiResultsRaw = await analyseWithAI(codeSnippet);
    const aiResults = normalizeAIResults(aiResultsRaw);
    console.log("AI Analysis Results:", aiResults);
  
    // Comparison
    console.log("\nComparison Results:");
    const comparison = {
      immutable_borrow: compareResults(treeSitterResults.immutable_borrow, aiResults.immutable_borrow),
      mutable_borrow: compareResults(treeSitterResults.mutable_borrow, aiResults.mutable_borrow),
      ownership_transfer: compareResults(treeSitterResults.ownership_transfer, aiResults.ownership_transfer)
    };
  
    console.log(comparison);
}
  
runComparisonTests();  
//async function runComparisonTests() {
//  const testCases = [
//    {
//      description: "Simple immutable borrow",
//      code: `fn main() { 
//        let x = 5; 
//        let y = &x; 
//        println!("{}", y); 
//        }`,
//      expected: { immutableBorrow: [2], mutableBorrow: [], ownershipTransfer: [] }
//    },
//  ];
//
//  for (const testCase of testCases) {
//    console.log(`\nAnalyzing: ${testCase.description}`);
//    
//    // Tree-sitter Analysis
//    const treeSitterResults = await analyseWithTreeSitter(testCase.code);
//    console.log("TreeSitter Results:", treeSitterResults);
//
//    // AI Analysis
//    const aiResults = await analyseWithAI(testCase.code);
//    console.log("AI Analysis Results:", aiResults);
//
//    // compare and Evaluate
//    const compareResults = (expected, actual) => JSON.stringify(expected.sort()) === JSON.stringify(actual.sort());
//
//    console.log("Comparison Results:");
//    console.log("  Immutable Borrow Match:", compareResults(testCase.expected.immutableBorrow, treeSitterResults.immutableBorrow) ? "TreeSitter" : "AI");
//    console.log("  Mutable Borrow Match:", compareResults(testCase.expected.mutableBorrow, treeSitterResults.mutableBorrow) ? "TreeSitter" : "AI");
//    console.log("  Ownership Transfer Match:", compareResults(testCase.expected.ownershipTransfer, treeSitterResults.ownershipTransfer) ? "TreeSitter" : "AI");
//  }
//}
//
//runComparisonTests();