const axios = require('axios');

async function parseWithChatGPT(codeSnippet) {
  try {
    const response = await axios.post(
      'https://api.openai.com/v1/completions',
      {
        model: 'code-davinci-002', 
        prompt: `Explain the following Rust code:\n\n${codeSnippet}`,
        temperature: 0,
        max_tokens: 100,
      },
      {
        headers: {
          'Authorization': ``
        }
      }
    );

    return response.data.choices[0].text.trim();
  } catch (error) {
    console.error('Error parsing with ChatGPT:', error);
    return null;
  }
}
