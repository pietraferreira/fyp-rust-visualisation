// initialise  TreeSitter and load the RustFYP language
async function initTreeSitter() {
  await TreeSitter.init(); // initialise system
  console.log("TreeSitter initialized"); 
  const parser = new TreeSitter(); // creates new TreeSitter parser instance
  const RustFYP = await TreeSitter.Language.load("tree-sitter-rustfyp.wasm"); // load the custom parser
  parser.setLanguage(RustFYP); // set it as the language
  console.log("Language set:", RustFYP);

  return parser;
}

function displayAiAnalysis(analysisData, sourceCode) {
  console.log("Received analysisData for display:", analysisData);
  // get the HTML element where analysis results will be displayed
  const analysisOutput = document.getElementById("aiAnalysisOutput");
  // clear existing content
  analysisOutput.innerHTML = "";

  const contentString = analysisData.choices[0].message.content;
  console.log("contentString:", contentString);

  try {
    const contentData = JSON.parse(contentString);
    console.log("Parsed contentData:", contentData);

    // split the source code into lines
    const sourceCodeLines = sourceCode.split("\n");

    // processes and displays the analysis data for a specific property (immutable_borrow, mutable_borrow, ownership_transfer)
    // with a given display text ("Immutable Borrow", "Mutable Borrow", "Ownership Transfer")
    function processAndDisplayData(data, propertyName, displayText) {
      let lines = [];
      // check and concatenate line numbers if the property exists (handles both singular and plural forms of the property name)
      if (data[propertyName] !== undefined) {
        lines = lines.concat(
          Array.isArray(data[propertyName])
            ? data[propertyName]
            : [data[propertyName]]
        );
      }
      const alternativePropertyName = propertyName + "s"; // handles plural forms
      if (data[alternativePropertyName] !== undefined) {
        lines = lines.concat(
          Array.isArray(data[alternativePropertyName])
            ? data[alternativePropertyName]
            : [data[alternativePropertyName]]
        );
      }
      lines = [...new Set(lines)].sort((a, b) => a - b); // remove duplicates and sort

      // display data in the webpage
      if (lines.length > 0) {
        const borrowsText = lines
          .map((line) => `Line ${line}: ${sourceCodeLines[line - 1]}`)
          .join("<br>");
        analysisOutput.innerHTML += `<p><strong>${displayText}:</strong><br>${borrowsText}</p>`;
      } else {
        analysisOutput.innerHTML += `<p>No ${displayText.toLowerCase()} detected.</p>`;
      }
    }

    // process and display the data for each property
    processAndDisplayData(contentData, "immutable_borrow", "Immutable Borrow");
    processAndDisplayData(contentData, "mutable_borrow", "Mutable Borrow");
    processAndDisplayData(
      contentData,
      "ownership_transfer",
      "Ownership Transfer"
    );
  } catch (error) {
    console.error("Error parsing analysis content:", error); // errors during JSON parsing
    console.error("Original content string:", contentString);
    analysisOutput.innerHTML += `<p>Error processing analysis data.</p>`;
  }
}

// check if a given node in the sytax tree involves ownership transfer
function involvesOwnershipTransfer(node) {
  if (node.type === "let_declaration") {
    const hasDirectAssignment = node.children.some(
      (child) => child.type === "identifier" || child.type === "call_expression"
    );

    const isBorrowing = node.children.some(
      (child) => child.type === "reference_expression"
    ); // checks for any borrowing

    return hasDirectAssignment && !isBorrowing;
  }
  return (
    node.children &&
    node.children.some((child) => involvesOwnershipTransfer(child))
  );
}

// generate HTML content with highlights based on the syntax analysis
function generateHighlightedHTML(node, sourceCode) {
  // templates for different styles
  const styleTemplate = (color, analysis) =>
    `style="background-color: ${color};" data-analysis="${analysis}"`;
  const ownershipStyle = styleTemplate(
    "lightblue",
    "Ownership is established or transferred."
  );
  const immutableBorrowStyle = styleTemplate(
    "lightgreen",
    "Immutable borrow, allowing read-only access."
  ); 
  const mutableBorrowStyle = styleTemplate(
    "pink",
    "Mutable borrow, allowing modification."
  );

  // apply the appropriate style to the given node 
  function applyStyle(node, text, sourceCode) {
    let style = "";

    console.log(
      "Node Type:",
      node.type,
      "Is Immutable Borrow:",
      isImmutableBorrow(node)
    );
    console.log(
      "Node Type:",
      node.type,
      "Is Mutable Borrow:",
      isMutableBorrow(node)
    );

    // determine the type of syntax pattern and select
    if (involvesOwnershipTransfer(node)) {
      style = ownershipStyle;
    } else if (isMutableBorrow(node)) {
      style = mutableBorrowStyle;
    } else if (isImmutableBorrow(node)) {
      style = immutableBorrowStyle;
    } else {
      // if node doesn't match, return orignal text
      return text;
    }

    // return the highlighted text with the selected style
    return `<span ${style}>${text}</span>`;
  }

  function isMutableBorrow(node) {
    // check for a mutable borrow by looking for a reference_expression that includes a mutable_specifier
    if (node.type === "reference_expression") {
      return node.children.some((child) => child.type === "mutable_specifier");
    }
    // recursively check children
    return (
      node.children && node.children.some((child) => isMutableBorrow(child))
    );
  }

  function isImmutableBorrow(node) {
    // check for an immutable borrow by looking for a reference_expression without a mutable_specifier
    if (node.type === "reference_expression") {
      return node.children.every((child) => child.type !== "mutable_specifier");
    }
    // recursively check children
    return (
      node.children && node.children.some((child) => isImmutableBorrow(child))
    );
  }

  // recursively highlight the syntax tree
  function highlightNode(node) {
    let result = "";

    if (
      [
        "let_declaration",
        "reference_expression",
        "assignment_expression",
      ].includes(node.type)
    ) {
      const text = sourceCode.substring(node.startIndex, node.endIndex);
      console.log("we will check this:", text);
      result += applyStyle(node, text, sourceCode);
    } else {
      // for nodes that don't directly mtach, process all child nodes recursively
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

  // start the recursive process with the root
  return highlightNode(node);
}

// sets up the webpage and handles the user input
document.addEventListener("DOMContentLoaded", async () => {
  const parser = await initTreeSitter(); // intialise the parser

  document.getElementById("parseButton").addEventListener("click", async () => {
    const code = document.getElementById("codeInput").value; // get code from input area
    const tree = parser.parse(code); // parse using TreeSitter RustFYP parser
    // display highlighted code in the output area
    document.getElementById("codeOutput").innerHTML = generateHighlightedHTML(
      tree.rootNode,
      code
    );

    // handling mouseover and mouseout events for spans
    document.querySelectorAll("#codeOutput span").forEach((span) => {
      span.addEventListener("mouseover", (event) => {
        const analysisText = event.target.getAttribute("data-analysis");
        document.getElementById("detailedAnalysis").style.display = "block";
        document.getElementById("analysisText").textContent = analysisText;
      });
      span.addEventListener("mouseout", () => {
        document.getElementById("detailedAnalysis").style.display = "none";
        document.getElementById("analysisText").textContent = "";
      });
    });

    // send the code to your backend for AI analysis
    fetch("http://localhost:3000/analyse-code", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify({ codeSnippet: code }),
    })
      .then((response) => response.json())
      .then((data) => {
        displayAiAnalysis(data.analysis, code); 
      })
      .catch((error) => console.error("Error analysing code with AI:", error));
  });
});
