// so i can set my API key in the .env file
require("dotenv").config();
const express = require("express");
const bodyParser = require("body-parser");
const cors = require("cors");

// create express app
const app = express();
const port = 3000;

// apply middleware to express app
app.use(cors()); // enable CORS, so that the frontend can make requests to the backend
app.use(bodyParser.json()); // automatically parse JSON in request body

// import the openAI SDK and configure it
const { OpenAI } = require("openai");
const openai = new OpenAI({
  apiKey: process.env.OPENAI_API_KEY,
});

// define a route to handle POST requests to /analyse-code
app.post("/analyse-code", async (req, res) => {
  // extract code snippet from request body
  const { codeSnippet } = req.body;
  // log the received code snipper for debugging purposes
  console.log("Received codeSnippet:", codeSnippet);

  try {
    // call OpenAI's GPT-3.5 model to analyse the code snippet (asynchronously)
    const response = await openai.chat.completions.create({
      model: "gpt-3.5-turbo", // gpt-3.5-turbo as it is very cost effective
      response_format: { type: "json_object" }, // JSON mode
      messages: [
        {
          role: "system",
          content:
            "You are a helpful assistant designed to output JSON. Analyse the following Rust code snippet. For immutable borrows, mutable borrows, and ownership transfers, list only the line of code where each occurs in JSON format.",
        },
        {
          role: "user",
          content: codeSnippet, // the input from the user
        },
      ],
    });

    // debug info
    console.log(response);
    
    // send response back from the OpenAI API back to the client
    res.json({ analysis: response });
  } catch (error) {
    console.error("Error caught:", error);
    // respond with 500 (internal server error) and error message
    res.status(500).json({ error: "Failed to analyse code" });
  }
});

// start server by listening on port 3000
app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
