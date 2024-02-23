const { analyseWithTreeSitter } = require('./treeSitterAnalysis');
const { analyseWithAI } = require('./aiAnalysis');

const testCases = [
    {
        description: "Simple immutable borrow",
        code: `fn main() { 
            let x = 5; 
            let y = &x; 
            println!("{}", y); 
        }`,
        expected: {
            immutableBorrow: [2],
            mutableBorrow: [],
            ownershipTransfer: [1]
        }
    },
    {
        description: "Simple mutable borrow",
        code: `fn main() { 
                let mut x = 5; 
                let y = &mut x; 
                *y += 1; 
            }`,
        expected: {
            immutableBorrow: [],
            mutableBorrow: [2],
            ownershipTransfer: [1]
        }
    },
    {
        description: "Ownership transfer",
        code: `fn main() { 
                let x = String::from("Hello");
                let y = x;
                println!("{}", x);
                println!("{}", y);
            }`,
        expected: {
            immutableBorrow: [],
            mutableBorrow: [],
            ownershipTransfer: [1]
        }
    },
    {
        description: "Multi-line code with mutable borrow",
        code: `fn main() {
                let mut x = 5;
                let y = &mut x;
                println!("{}", y);
            }`,
        expected: {
            immutableBorrow: [],
            mutableBorrow: [2],
            ownershipTransfer: [1]
        }
    },
    // add more 
];

async function compareAnalyses() {
    for (const testCase of testCases) {
        console.log(`\nAnalyzing: ${testCase.description}`);
        
        const treeSitterResults = await analyseWithTreeSitter(testCase.code);
        console.log("TreeSitter Results:", treeSitterResults);

        const aiResults = await analyseWithAI(testCase.code);
        console.log("AI Analysis Results:", aiResults);

        const comparisonResults = {
            immutableBorrowMatches: JSON.stringify(treeSitterResults.immutableBorrow) === JSON.stringify(testCase.expected.immutableBorrow) &&
                                    JSON.stringify(aiResults.immutable_borrows || []) === JSON.stringify(testCase.expected.immutableBorrow),
            mutableBorrowMatches: JSON.stringify(treeSitterResults.mutableBorrow) === JSON.stringify(testCase.expected.mutableBorrow) &&
                                  JSON.stringify(aiResults.mutable_borrows || []) === JSON.stringify(testCase.expected.mutableBorrow),
            ownershipTransferMatches: JSON.stringify(treeSitterResults.ownershipTransfer) === JSON.stringify(testCase.expected.ownershipTransfer) &&
                                       JSON.stringify(aiResults.ownership_transfers || []) === JSON.stringify(testCase.expected.ownershipTransfer),
        };

        console.log("Comparison Results:", comparisonResults);
    }
}

compareAnalyses().catch(console.error);