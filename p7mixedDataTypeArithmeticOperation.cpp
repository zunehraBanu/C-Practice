// 7. Write a C++ program that displays mixed data types and arithmetic operations.

#include <iostream>
#include <iomanip>
using namespace std;
// Functions for another way of writing coding

/*Definition of a Function:
In programming, a function is a self-contained, reusable block of code that performs a specific task or set of tasks. Functions are designed to be modular, meaning they can be called and executed independently. They encapsulate a sequence of instructions and can take input (parameters) and produce output (a return value).

Key Characteristics of Functions:

1.Modularity: Functions break down a program into smaller, manageable pieces. Each function is responsible for a specific task or operation, making the code more organized and easier to understand.

2. Reusability: Functions can be called multiple times from different parts of a program. This reusability eliminates the need to duplicate code for common tasks.

3. Abstraction: Functions hide the internal details of their implementation from the caller. The caller doesn't need to know how a function works internally, only what it does and how to use it.
Function Signature: A function's signature consists of its name, return type, and parameter list. It defines how the function is called and what it does. return_type function_name(parameter_list);
For example:
int add(int a, int b);  // Function named "add" that takes two integers and returns an integer.
void displayMessage();   // Function named "displayMessage" with no parameters and no return value.
In summary, functions are a fundamental concept in programming that help structure code, promote reusability, and enhance the maintainability of software. They play a crucial role in breaking down complex tasks into manageable pieces, making them essential in virtually all programming languages and software development projects.*/

/*A general function in C++ has the following structure:
return_type function_name(parameter_list) {
    // Function body
    // Perform some operations using the parameters
    // Optionally, return a value using the return statement
}*/
/*void function_name(parameter_list) {
    // Function body
    // Perform some operations using the parameters
    // No return value is expected
}*/

/*Four separate functions (performAddition, performSubtraction, performMultiplication, and performDivision) are defined to perform arithmetic operations and display the results. These functions accept four parameters: two integers (num1 and num2) and two doubles (num3 and num4).*/

//  Function to perform and display addition
void performAddition(int num1, int num2, double num3, double num4)
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num3 << " + " << num4 << " = " << num3 + num4 << endl;
    cout << num1 << " + " << num4 << " = " << num1 + num4 << endl;
}

// Function to perform and display subtraction
void performSubtraction(int num1, int num2, double num3, double num4)
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num3 << " - " << num4 << " = " << num3 - num4 << endl;
    cout << num1 << " - " << num4 << " = " << num1 - num4 << endl;
}
void performMultiplication(int num1, int num2, double num3, double num4)
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num3 << " * " << num4 << " = " << num3 * num4 << endl;
    cout << num1 << " * " << num4 << " = " << num1 * num4 << endl;
}
// Function to perform and display division
void performDivision(int num1, int num2, double num3, double num4)
{
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num3 << " / " << num4 << " = " << num3 / num4 << endl;
    cout << num1 << " / " << num4 << " = " << num1 / num4 << endl;
}
int main()
{
    // Declare integer and double variables
    int num1 = 5;
    int num2 = 7;
    double num3 = 3.7;
    double num4 = 8.0;
    // Output a title for the program
    cout << "Display arithmetic operations with mixed data type : ";
    cout << "\n---------------------------------------------------------------------------------------\n";

    // Set output format to fixed-point with one decimal place.
    cout << fixed << setprecision(1);
    // Perform and display arithmetic operations
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num3 << " + " << num4 << " = " << num3 + num4 << endl;
    cout << num1 << " + " << num4 << " = " << num1 + num4 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num3 << " - " << num4 << " = " << num3 - num4 << endl;
    cout << num1 << " - " << num4 << " = " << num1 - num4 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num3 << " * " << num4 << " = " << num3 * num4 << endl;
    cout << num1 << " * " << num4 << " = " << num1 * num4 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num3 << " / " << num4 << " = " << num3 / num4 << endl;
    cout << num1 << " / " << num4 << " = " << num1 / num4 << endl;

    // Another way of writing this program
    cout << "---------------------------------------------------------------------------------------" << endl;
    /*The performAddition, performSubtraction, performMultiplication, and performDivision functions are called to perform and display the corresponding arithmetic operations with the mixed data types.*/
    performAddition(num1, num2, num3, num4);
    performSubtraction(num1, num2, num3, num4);
    performMultiplication(num1, num2, num3, num4);
    performDivision(num1, num2, num3, num4);
}
