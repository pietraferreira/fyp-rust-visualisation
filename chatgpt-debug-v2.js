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

console.log('API Key:', process.env.OPENAI_API_KEY ? 'Exists' : 'Not Found');

app.post('/analyze-code', async (req, res) => {
  const { codeSnippet } = req.body;
  console.log('Received codeSnippet:', codeSnippet);

  try {
    const response = await openai.chat.completions.create({
      model: "gpt-3.5-turbo",
      messages: [{
          role: "system",
          content: "Analyse the following Rust code snippet. For immutable borrows, mutable borrows, and ownership transfers, list only the line of code where each occurs. Use the format:\n\n- Ownership transfer: [line of code]\n- Immutable borrow: [line of code]\n- Mutable borrow: [line of code]\n\nIf none are present, state 'None' for the category. Provide concise responses"
      }, {
          role: "user",
          content: codeSnippet
      }]
    });

    console.log(response.choices[0].message.content)

    // Debugging: Check if response is as expected
 //   if (!response || !response.data) {
 //     console.error('No response or response data');
 //     return res.status(500).json({ error: "Failed to analyse code due to no response" });
 //   }

 //   console.log('OpenAI API response:', JSON.stringify(response.data));

 //   // Assuming correct access path based on OpenAI SDK and API docs
 //   const lastMessage = response.choices[0].message.content.trim();
 //   res.json({ analysis: lastMessage });
} catch (error) {
      console.error('Error caught:', error);
      res.status(500).json({ error: "Failed to analyse code" });
  }
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
