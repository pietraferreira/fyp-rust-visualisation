const { analyseWithTreeSitter } = require('./treeSitterAnalysis');

async function runTest() {
  const testCases = [
    {
      code: `fn main() { let x = 5; let y = &x; println!("{}", y); }`,
      expected: {
        immutableBorrow: [1], 
        mutableBorrow: [],
        ownershipTransfer: [1]
      }
    },
  ];

  for (const testCase of testCases) {
    console.log(`Testing code snippet: ${testCase.code}`);
    const result = await analyseWithTreeSitter(testCase.code);
    console.log(`Results: `, result);
  }
}

runTest();
