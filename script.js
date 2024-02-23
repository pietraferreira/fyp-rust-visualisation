async function initTreeSitter() {
    await TreeSitter.init();
    console.log('TreeSitter initialized');

    const parser = new TreeSitter();
    const RustFYP = await TreeSitter.Language.load('tree-sitter-rustfyp.wasm');
    parser.setLanguage(RustFYP);
    console.log('Language set:', RustFYP);

    return parser;
}

// Include your other functions here (isMutableBorrow, isImmutableBorrow, etc.)

function displayAiAnalysis(analysisData) {
    console.log('Received analysisData for display:', analysisData);
    const analysisOutput = document.getElementById('aiAnalysisOutput');
    analysisOutput.innerHTML = ''; // Clear previous content

    const contentString = analysisData.choices[0].message.content;
    console.log('contentString:', contentString);

    try {
        const contentData = JSON.parse(contentString);
        console.log('Parsed contentData:', contentData);

        // Helper function to process and display borrow or transfer data
        function processAndDisplayData(data, propertyName, displayText) {
            let lines = [];
            if (data[propertyName] !== undefined) {
                lines = lines.concat(Array.isArray(data[propertyName]) ? data[propertyName] : [data[propertyName]]);
            }
            const alternativePropertyName = propertyName + 's'; // Handles plural forms
            if (data[alternativePropertyName] !== undefined) {
                lines = lines.concat(Array.isArray(data[alternativePropertyName]) ? data[alternativePropertyName] : [data[alternativePropertyName]]);
            }
            lines = [...new Set(lines)].sort((a, b) => a - b); // Remove duplicates and sort

            if (lines.length > 0) {
                const borrowsText = lines.map(line => `Line ${line}: ${displayText}`).join('<br>');
                analysisOutput.innerHTML += `<p><strong>${displayText}:</strong><br>${borrowsText}</p>`;
            } else {
                analysisOutput.innerHTML += `<p>No ${displayText.toLowerCase()} detected.</p>`;
            }
        }

        // Process and display immutable borrows
        processAndDisplayData(contentData, "immutable_borrow", "Immutable Borrow");
        
        // Process and display mutable borrows
        processAndDisplayData(contentData, "mutable_borrow", "Mutable Borrow");
        
        // Process and display ownership transfers
        processAndDisplayData(contentData, "ownership_transfer", "Ownership Transfer");

    } catch (error) {
        console.error('Error parsing analysis content:', error);
        console.error('Original content string:', contentString);
        analysisOutput.innerHTML += `<p>Error processing analysis data.</p>`;
    }
}

function involvesOwnershipTransfer(node) {
    // Check if the node is a let_declaration
    if (node.type === 'let_declaration') {
        // Check for direct assignment that's not a borrowing
        const hasDirectAssignment = node.children.some(child => 
            child.type === 'identifier' || child.type === 'call_expression'); // Simplified for clarity

        const isBorrowing = node.children.some(child => 
            child.type === 'reference_expression'); // Checks for any borrowing

        return hasDirectAssignment && !isBorrowing;
    }
    // Recursively check children for deeper ownership transfers
    return node.children && node.children.some(child => involvesOwnershipTransfer(child));
}

function generateHighlightedHTML(node, sourceCode) {
    // Define styles with data-analysis for detailed explanations
    const styleTemplate = (color, analysis) => `style="background-color: ${color};" data-analysis="${analysis}"`;

    // Explanation templates
    const ownershipStyle = styleTemplate("lightblue", "Ownership is established or transferred.");
    const immutableBorrowStyle = styleTemplate("lightgreen", "Immutable borrow, allowing read-only access.");
    const mutableBorrowStyle = styleTemplate("pink", "Mutable borrow, allowing modification.");

    function applyStyle(node, text, sourceCode) {
        let style = "";
    
        console.log('Node Type:', node.type, 'Is Immutable Borrow:', isImmutableBorrow(node));
        console.log('Node Type:', node.type, 'Is Mutable Borrow:', isMutableBorrow(node));
        if (involvesOwnershipTransfer(node)) {
            style = ownershipStyle;
        } else if (isMutableBorrow(node)) {
            style = mutableBorrowStyle;
        } else if (isImmutableBorrow(node)) {
            style = immutableBorrowStyle;
        } else {
            return text;
        }
    
        return `<span ${style}>${text}</span>`;
    }

    function isMutableBorrow(node) {
        // Check for a mutable borrow by looking for a reference_expression that includes a mutable_specifier
        if (node.type === 'reference_expression') {
            return node.children.some(child => child.type === 'mutable_specifier');
        }
        // Recursively check children
        return node.children && node.children.some(child => isMutableBorrow(child));
    }
    
    function isImmutableBorrow(node) {
        // Check for an immutable borrow by looking for a reference_expression without a mutable_specifier
        if (node.type === 'reference_expression') {
            return node.children.every(child => child.type !== 'mutable_specifier');
        }
        // Recursively check children
        return node.children && node.children.some(child => isImmutableBorrow(child));
    }

    function highlightNode(node) {
        let result = '';
        //console.log(node.type, node.startIndex, node.endIndex)
        if (['let_declaration', 'reference_expression', 'assignment_expression'].includes(node.type)) {
            const text = sourceCode.substring(node.startIndex, node.endIndex);
            console.log('we will check this:', text)
            result += applyStyle(node, text, sourceCode);
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

    document.getElementById('parseButton').addEventListener('click', async () => {
        const code = document.getElementById('codeInput').value;
        const tree = parser.parse(code);
        document.getElementById('codeOutput').innerHTML = generateHighlightedHTML(tree.rootNode, code);

        // Handling mouseover and mouseout events for spans
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

        // Send the code to your backend for AI analysis
        fetch('http://localhost:3000/analyze-code', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
            },
            body: JSON.stringify({ codeSnippet: code }),
        })
        .then(response => response.json())
        .then(data => {
            displayAiAnalysis(data.analysis); // Ensure data.analysis is the correct path to your analysis data
        })
        .catch(error => console.error('Error analyzing code with AI:', error));
    });
});
