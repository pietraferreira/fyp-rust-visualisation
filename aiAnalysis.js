require('dotenv').config();
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

    let analysisContent = response.choices[0].message.content;
    let analysisResults = JSON.parse(analysisContent);

    // Normalize results to ensure format consistency
    let normalizedResults = {
      immutable_borrow: [],
      mutable_borrow: [],
      ownership_transfer: []
    };

    // Function to normalize and ensure all keys are in expected format
    const normalizeKey = (key, results) => {
      if (results[key]) { // If singular form exists
        normalizedResults[key] = Array.isArray(results[key]) ? results[key] : [results[key]];
      }
      let pluralKey = key + 's';
      if (results[pluralKey]) { // If plural form exists
        normalizedResults[key] = normalizedResults[key].concat(
          Array.isArray(results[pluralKey]) ? results[pluralKey] : [results[pluralKey]]
        );
      }
      // Ensure unique values and sort them
      normalizedResults[key] = [...new Set(normalizedResults[key])].sort((a, b) => a - b);
    };

    // Normalize keys
    normalizeKey('immutable_borrow', analysisResults);
    normalizeKey('mutable_borrow', analysisResults);
    normalizeKey('ownership_transfer', analysisResults);

    //console.log(normalizedResults); // For debugging
    return normalizedResults;
  } catch (error) {
    console.error("Error caught in AI analysis:", error);
    throw new Error("Failed to analyse code with AI");
  }
}

module.exports = { analyseWithAI };
