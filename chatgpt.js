require('dotenv').config();
const express = require('express');
const bodyParser = require('body-parser');
const cors = require('cors');

const app = express();
const port = 3000; // Or any port you prefer

app.use(cors());
app.use(bodyParser.json());

const { OpenAI } = require('openai');

const openai = new OpenAI({
    apiKey: process.env.OPENAI_API_KEY, // It's safer to use an environment variable for your API key
});

app.post('/analyze-code', async (req, res) => {
  const { codeSnippet } = req.body;
  try {
      const response = await openai.completions.create({
          model: "gpt-3.5-turbo", // Or the latest available model
          prompt: `Identify and describe any instances of mutable and immutable borrows, and ownership transfers in the following Rust code:\n\n${codeSnippet}`,
          temperature: 0.5,
          max_tokens: 150,
          n: 1,
          stop: null,
      });
      res.json({ analysis: response.data.choices[0].text.trim() });
  } catch (error) {
      console.error(error);
      res.status(500).json({ error: "Failed to analyze code" });
  }
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});