require('dotenv').config();
const express = require('express');
const bodyParser = require('body-parser');
const cors = require('cors');

const app = express();
const port = 3000;

app.use(cors());
app.use(bodyParser.json());

const { OpenAI } = require('openai');

const openai = new OpenAI({
    apiKey: process.env.OPENAI_API_KEY,
});

app.post('/analyze-code', async (req, res) => {
  const { codeSnippet } = req.body;
  console.log('Received codeSnippet:', codeSnippet);

  try {
    const response = await openai.chat.completions.create({
      model: "gpt-3.5-turbo",
      response_format: { "type": "json_object" }, // Specify JSON mode
      messages: [{
        role: "system",
        content: "You are a helpful assistant designed to output JSON. Analyse the following Rust code snippet. For immutable borrows, mutable borrows, and ownership transfers, list only the line of code where each occurs in JSON format."
      }, {
        role: "user",
        content: codeSnippet
      }]
    });

    //console.log(response.choices[0].message.content)
    
    // simulate response
    //const simulatedResponse = {
    //  "immutable_borrow": [2]
    //};

    console.log(response);
    res.json({ analysis: response });

  } catch (error) {
    console.error('Error caught:', error);
    res.status(500).json({ error: "Failed to analyse code" });
  }
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
