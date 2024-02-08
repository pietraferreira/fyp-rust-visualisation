# Visualizing Ownership and Borrowing in Rust Programming

Welcome to the README for the Final Year Project, an ambitious endeavor to simplify the complexities of Rust's ownership and borrowing system through a cutting-edge visualization tool. As a Computer Science student at Brunel University London, I am excited to present this project, which aims to revolutionize the learning experience for Rust programmers of all levels.

Checkout the application
[here](https://pietraferreira.github.io/fyp-rust-visualisation/).

## Getting Started

To dive into this project, follow these steps:

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/pietraferreira/fyp-rust-visualisation.git
   cd fyp-rust-visualisation
   ```

2. **Install [Treesitter](https://tree-sitter.github.io/tree-sitter/):**
   - Using npm:
     ```bash
     npm install tree-sitter-cli
     ```

   - Using Cargo:
     ```bash
     cargo install tree-sitter-cli
     ```

3. **Generate the Parser:**
   ```bash
   cd parser
   tree-sitter generate
   ```

4. **Test the Parser:**
   - To test on a single file:
     ```bash
     tree-sitter parser <file.rs>
     ```

   - To run the testsuite:
     ```bash
     tree-sitter test
     ```

## The Challenge

Rust, known for its memory safety features without a garbage collector, introduces a unique challenge—its resource ownership and borrowing system. This project addresses the complexities that both beginners and seasoned programmers face in mastering this system. The intricacies of mentally tracking ownership events and state changes can slow down the learning process and hinder development.

## Solution: Visualising the Invisible

The solution lies in a state-of-the-art visualization tool that brings Rust's ownership and borrowing events to life. This tool aims to make the static events and their impact visually evident, accelerating the learning process for developers. By integrating these visualizations, the goal is to empower programmers to write robust and efficient Rust code with confidence.

## Project Roadmap

For an in-depth look at the project plan, feel free to explore the [Project Roadmap](https://docs.google.com/spreadsheets/d/10SFPy4_YJXTUK5VGSEEqxCskvfLIiwmAy_rdeEKeXRM/edit#gid=0). Your insights and contributions are welcome as we embark on this journey to redefine the Rust programming experience. Let's shape the future of ownership and borrowing visualization together.

## References

- [Rust Grammar](https://doc.rust-lang.org/reference/introduction.html)
- [RustViz](https://github.com/rustviz/rustviz)
