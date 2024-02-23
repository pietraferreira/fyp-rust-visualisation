const { OpenAI } = require("openai");

const openai = new OpenAI({
  apiKey: process.env.OPENAI_API_KEY,
});

async function analyseWithAI(codeSnippet) {
  try {
    const response = await openai.chat.completions.create({
      model: "gpt-3.5-turbo",
      response_format: { type: "json_object" },
      messages: [
        {
          role: "system",
          content:
            "You are a helpful assistant designed to output JSON. Analyse the following Rust code snippet. For immutable borrows, mutable borrows, and ownership transfers, list only the line of code where each occurs in JSON format.",
        },
        {
          role: "user",
          content: codeSnippet,
        },
      ],
    });

    const analysisContent = response.choices[0].message.content;
    const analysisResults = typeof analysisContent === 'string' ? JSON.parse(analysisContent) : analysisContent;

    return analysisResults;
  } catch (error) {
    console.error("Error caught in AI analysis:", error);
    throw new Error("Failed to analyse code with AI");
  }
}

module.exports = { analyseWithAI };
