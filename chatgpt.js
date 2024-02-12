const { OpenAI } = require('openai');

const openai = new OpenAI({
    apiKey: process.env.OPENAI_API_KEY, // It's safer to use an environment variable for your API key
});

async function analyzeRustCode(codeSnippet) {
    try {
        const response = await openai.completions.create({
            model: "gpt-3.5-turbo", // Or the latest available model
            prompt: `Identify and describe any instances of mutable and immutable borrows, and ownership transfers in the following Rust code:\n\n${codeSnippet}`,
            temperature: 0.5,
            max_tokens: 150,
            n: 1,
            stop: null,
        });

        console.log(response.data.choices[0].text.trim());
    } catch (error) {
        console.error(error);
    }
}

// Example usage
const rustCodeSnippet = `
fn main() {
    let x = String::from("Hello");
    let y = &x;
    println!("{}", x);
    println!("{}", y);
}
`;

analyzeRustCode(rustCodeSnippet);