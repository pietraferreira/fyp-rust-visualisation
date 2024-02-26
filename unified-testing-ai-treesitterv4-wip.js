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

  return {
    aiPerformedBetter: aiScore > treeSitterScore,
    treeSitterPerformedBetter: treeSitterScore > aiScore,
    equalPerformance: treeSitterScore === aiScore
  };
}

async function runAllTests() {
  // counters
  let aiCorrectCount = 0;
  let treeSitterCorrectCount = 0;
  let totalTests = 0;

  const testCases = [
    {
      description: "Variable declaration without initialization",
      code: `fn main() {
         let x;
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Variable declaration with immutable borrow",
      code: `fn main() {
         let x = 5;
         let y = &x;
      }`,
      expected: {
        immutable_borrow: [3],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Variable declaration with mutable borrow",
      code: `fn main() {
         let mut x = 5;
         let y = &mut x;
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [3],
        ownership_transfer: []
      }
    },
    {
      description: "Basic arithmetic operation",
      code: `fn main() {
         let x = 5 + 2;
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Function definition without parameters",
      code: `fn test() {
         let x = 10;
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Function call with immutable borrow",
      code: `fn main() {
         let x = 5;
         print_value(&x);
      }
  
      fn print_value(val: &i32) {}`,
      expected: {
        immutable_borrow: [3],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Mutable variable reassignment",
      code: `fn main() {
         let mut x = 5;
         x = 10;
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Ownership transfer in function call",
      code: `fn main() {
         let x = 5;
         take_ownership(x);
      }
  
      fn take_ownership(val: i32) {}`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: [3]
      }
    },
    {
      description: "Block scope with variable shadowing",
      code: `fn main() {
         let x = 5;
         {
             let x = x + 1;
             println!("{}", x);
         }
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
    {
      description: "Method call on primitive type",
      code: `fn main() {
         let x = 5.to_string();
      }`,
      expected: {
        immutable_borrow: [],
        mutable_borrow: [],
        ownership_transfer: []
      }
    },
  ];
  
  for (const testCase of testCases) {
    console.log(`\nRunning Test: ${testCase.description}`);
    //await runComparisonTest(testCase.code, testCase.expected);
    const result = await runComparisonTest(testCase.code, testCase.expected);
    if (result.aiPerformedBetter) aiCorrectCount++;
    if (result.treeSitterPerformedBetter) treeSitterCorrectCount++;
    if (result.equalPerformance) {
      aiCorrectCount++;
      treeSitterCorrectCount++;
    }
    totalTests++;
  }

  console.log("\nOverall Performance Results:");
  console.log(`| System        | Correct Tests | Percentage   |`);
  console.log(`|---------------|---------------|--------------|`);
  console.log(`| AI            | ${aiCorrectCount}            | ${(aiCorrectCount / totalTests * 100).toFixed(2)}%        |`);
  console.log(`| Tree-Sitter   | ${treeSitterCorrectCount}            | ${(treeSitterCorrectCount / totalTests * 100).toFixed(2)}%        |`);
}

runAllTests();