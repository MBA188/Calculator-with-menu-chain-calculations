# Simple C++ Calculator with Menu and Chaining Calculations
A console-based calculator written in C++ that supports basic arithmetic operations and chaining calculations, allowing you to perform multiple operations consecutively without restarting the program.
## Project Overview
This calculator program is designed for beginner and intermediate C++ users to:
- Learn basic input/output handling in C++.
- Practice loops, conditionals, and input validation.
- Understand how to implement a simple calculator with chaining functionality.
The program allows users to perform repeated calculations using the previous result as the first number for the next operation.
## Features
- Supports **addition (+), subtraction (-), multiplication (* or x), and division (/)**.
- Chaining calculations: automatically uses the previous result for the next operation.
- Floating-point support: handles decimal numbers for accurate calculations.
- Strict input validation:
  - Only valid numbers are accepted.
  - Only valid operators are accepted.
  - Division by zero is prevented.
- User-friendly console prompts guide the calculation process.
## How It Works
1. The program displays a menu with options:
   - Perform a calculation
   - Quit the program
2. The user enters the first two numbers for the calculation.
3. The user selects an operator (`+`, `-`, `*`, `x`, `/`).
4. The program performs the calculation and displays the result.
5. The user can choose to continue calculating:
   - If yes, the previous result becomes the first number for the next operation.
   - If no, the program displays the final result and returns to the menu.
## Example Usage
Enter the numbers you want to perform calculation on: 5 2
What calculation do you want to do? (+, -, *, x, /): +
Current result: 7
Want to continue? Press 1: 1
Previous result: 7
Enter next number: 3
What calculation do you want to do? (+, -, *, x, /): x
Current result: 21
Want to continue? Press 1: 0
The final result is: 21
markdown
Copy code
## Future Improvements
- Allow multiple operations in a single input line (e.g., `5 + 2 * 3`).
- Add history tracking to see all previous calculations in one session.
- Improve UI formatting for better readability of results.
## How to Run
1. Clone or download the repository.
2. Open the file `calculator.cpp` in a C++ IDE or text editor (like Dev C++ or VS Code).
### Compile the program:
```bash
g++ calculator.cpp -o calculator
```
Run the program:
 Copy code
```bash

./calculator   # Linux/Mac
calculator.exe # Windows
```
Follow the prompts to perform calculations.

##License
This project is open-source and free to use.