async function initTreeSitter() {
    await TreeSitter.init();

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load("tree-sitter-rustfyp.wasm");
    parser.setLanguage(RustFYP);

    return parser;
}

function generateHighlightedHTML(node, sourceCode) {
    // Define styles with data-analysis for detailed explanations
    const styleTemplate = (color, analysis) => `style="background-color: ${color};" data-analysis="${analysis}"`;

    // Updated explanations to be more accurate
    const ownershipStyle = styleTemplate("lightblue", "This is where ownership is established or transferred.");
    const immutableBorrowStyle = styleTemplate("lightgreen", "An immutable borrow allows read-only access to the data.");
    const mutableBorrowStyle = styleTemplate("pink", "A mutable borrow allows data to be modified.");

    function applyStyle(nodeType, text) {
        let style = "";
        // Refine conditions to more accurately apply styles
        if (nodeType.includes('mutable_specifier') && text.includes("&mut")) {
            style = mutableBorrowStyle; // Correct for mutable borrows
        } else if (nodeType.includes('reference_expression') && !text.includes("&mut")) {
            style = immutableBorrowStyle; // Correct for immutable borrows
        } else {
            // Apply a default style or no style
            // Determine if there's a need for a default style based on your application's requirements
            return text;
        }
        return `<span ${style}>${text}</span>`;
    }

    // Recursive function to traverse and highlight the syntax tree
    function highlightNode(node) {
        let result = '';
        // List of node types to check might need adjustment based on your tree-sitter grammar definitions
        if (node.type === 'reference_expression' || node.type === 'mutable_specifier') {
            result += applyStyle(node.type, sourceCode.substring(node.startIndex, node.endIndex));
        } else {
            let lastIndex = node.startIndex;
            node.children.forEach((child) => {
                result += sourceCode.substring(lastIndex, child.startIndex);
                result += highlightNode(child);
                lastIndex = child.endIndex;
            });
            result += sourceCode.substring(lastIndex, node.endIndex);
        }
        return result;
    }

    return highlightNode(node);
}

document.addEventListener('DOMContentLoaded', async () => {
    const parser = await initTreeSitter();

    document.getElementById('parseButton').addEventListener('click', () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);

        // Attach event listeners for newly created spans for hover analysis
        document.querySelectorAll('#codeOutput span').forEach(span => {
            span.addEventListener('mouseover', (event) => {
                const analysisText = event.target.getAttribute('data-analysis');
                document.getElementById('detailedAnalysis').style.display = 'block';
                document.getElementById('analysisText').textContent = analysisText;
            });
            span.addEventListener('mouseout', () => {
                document.getElementById('detailedAnalysis').style.display = 'none';
                document.getElementById('analysisText').textContent = '';
            });
        });
    });
});
