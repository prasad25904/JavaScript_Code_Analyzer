
# 🧠 JavaScript Code Analyzer

A lightweight JavaScript static code analyzer built using **Flex** and **Bison**, capable of generating an **Abstract Syntax Tree (AST)**, building a **Symbol Table**, and performing **Semantic Analysis**.

---

## 🔍 Features

- ✅ **Lexical Analysis**: Tokenizes JavaScript code using a custom lexer (`js_lexer.l`).
- ✅ **Syntax Analysis**: Parses JavaScript code using Bison grammar (`js_parser.y`).
- ✅ **AST Generation**: Constructs and outputs an Abstract Syntax Tree from valid JavaScript code.
- ✅ **Symbol Table**: Tracks identifiers, scopes, and symbol information during parsing.
- ✅ **Semantic Analysis**: Performs basic type checking and semantic validations.
- ✅ **Visualization**: Generates `.dot` files for AST visualization using Graphviz.

---

## 📂 Project Structure

```
.
├── ast.c / ast.h            # AST node structure and utilities
├── js_lexer.l               # Lexer file (Flex)
├── js_parser.y              # Parser file (Bison)
├── symbol_table.c / .h      # Symbol table implementation
├── semantic.c               # Semantic checks and validations
├── ast.dot / ast.png        # Output visualizations
├── input.js                 # Sample input JS file
├── Makefile                 # Build instructions
└── README.md                # You're here!
```

---

## ⚙️ How to Build and Run

### 🔧 Prerequisites

Ensure the following are installed on your system:

- **C/C++ Compiler** (e.g., `gcc`)
- **Flex** – [https://github.com/westes/flex](https://github.com/westes/flex)
- **Bison** – [https://www.gnu.org/software/bison/](https://www.gnu.org/software/bison/)
- **Graphviz** (for AST visualization) – [https://graphviz.org/](https://graphviz.org/)

You can install them using your package manager:

```bash
# For Ubuntu/Debian
sudo apt install flex bison graphviz build-essential

# For Mac (with Homebrew)
brew install flex bison graphviz
```

---

### 🛠️ Build the Analyzer

```bash
make
```

This will generate the `analyzer` executable.

---

### ▶️ Run the Analyzer

```bash
./analyzer input.js
```

This will:
- Parse the provided `input.js` file
- Generate the `ast.dot` file
- Optionally generate `ast.png` (if you use Graphviz)

---

### 📊 Visualize the AST

```bash
dot -Tpng ast.dot -o ast.png
```

Then open `ast.png` to see a visual representation of the Abstract Syntax Tree.

---

## ✅ Supported JavaScript Features

- Variable declarations using `var`
- Arithmetic and logical expressions
- `if` and `while` statements
- Object literals
- Function definitions and calls
- Nested scopes and blocks

> Note: Support for `let`, `const`, arrays, classes, arrow functions, and import/export is **in progress**.

---

## 🚀 Planned Improvements

- [ ] Add support for modern ES6+ syntax (e.g., `let`, `const`, arrow functions, classes)
- [ ] Enhanced semantic analysis and type checking
- [ ] Improved error messages (syntax and semantic)
- [ ] Export AST in JSON format for external tools
- [ ] CLI flags for customization (e.g., output format, visualization toggle)
- [ ] Web-based frontend using React for interactive AST visualization
- [ ] Unit testing and CI integration

---

## 🧑‍💻 Author

**Prasad Ingle**  
GitHub: [https://github.com/prasad25904](https://github.com/prasad25904)

---

## 📝 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
```

Let me know if you want to include example input/output code snippets or detailed instructions for contributing!
