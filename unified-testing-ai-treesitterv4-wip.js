const { analyseWithTreeSitter } = require('./treeSitterAnalysis');
const { analyseWithAI } = require('./aiAnalysis');

function normalizeAIResults(aiResults) {
  const standardizedResults = {
    immutable_borrow: aiResults.immutable_borrows || aiResults.immutable_borrow || [],
    mutable_borrow: aiResults.mutable_borrows || aiResults.mutable_borrow || [],
    ownership_transfer: aiResults.ownership_transfers || aiResults.ownership_transfer || []
  };

  // ensure all values are arrays (in case the AI provides a single number instead of an array)
  Object.keys(standardizedResults).forEach(key => {
    if (!Array.isArray(standardizedResults[key])) {
      standardizedResults[key] = [standardizedResults[key]];
    }
  });

  return standardizedResults;
}

function compareResults(expected, actual) {
  // ensure both expected and actual are arrays
  expected = Array.isArray(expected) ? expected : [];
  actual = Array.isArray(actual) ? actual : [];

  // sort both arrays for a consistent comparison
  return JSON.stringify(expected.sort()) === JSON.stringify(actual.sort());
}

async function runComparisonTest(codeSnippet, expectedResults) {
  console.log("Analyzing code snippet:");
  console.log(codeSnippet);

  // TreeSitter analysis
  const treeSitterResults = await analyseWithTreeSitter(codeSnippet);
  console.log("TreeSitter Results:", JSON.stringify(treeSitterResults));

  // AI analysis
  const aiResultsRaw = await analyseWithAI(codeSnippet);
  const aiResults = normalizeAIResults(aiResultsRaw);
  console.log("AI Analysis Results:", JSON.stringify(aiResults));

  // performance comparison
  console.log("\nPerformance Comparison:");
  let treeSitterScore = 0;
  let aiScore = 0;

  Object.keys(expectedResults).forEach(key => {
    const result = compareResults(expectedResults[key], treeSitterResults[key]);
    if (result) treeSitterScore++;
    const aiResult = compareResults(expectedResults[key], aiResults[key]);
    if (aiResult) aiScore++;
  });

  if (treeSitterScore > aiScore) {
    console.log("TreeSitter performed better.");
  } else if (aiScore > treeSitterScore) {
    console.log("AI performed better.");
  } else {
    console.log("Both performed equally.");
  }
}

async function runAllTests() {
  const testCases = [
    {
      description: "Test Case 1",
      code: `fn main() {
         let x = 5;
         let y = &x;
         println!("{}", y);
        }`,
      expected: {
        immutable_borrow: [2],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    // more test cases here
  ];

  for (const testCase of testCases) {
    console.log(`\nRunning Test: ${testCase.description}`);
    await runComparisonTest(testCase.code, testCase.expected);
  }
}

runAllTests();