const { analyseWithAI } = require('./aiAnalysis');

async function runAITest() {
  const codeSnippet = `fn main() { let x = 5; let y = &x; println!("{}", y); }`;

  try {
    console.log("Sending code snippet to AI for analysis:");
    const results = await analyseWithAI(codeSnippet);
    console.log("AI Analysis Results:", results);
  } catch (error) {
    console.error("AI analysis failed:", error);
  }
}

runAITest();
