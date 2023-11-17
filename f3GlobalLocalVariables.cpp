// Local variables - These are variables that are declared inside the function or block.
// Global variables - These are variables that exists throughout the whole program and can be used in any part of the program. Global variables are typically declared outside of any function or block

#include <iostream>
using namespace std;
int variable = 5;
int main()
{
    int variable = 7; // Local variables can have the same name as global variables without causing conflicts

    // Print the value of the local variable
    cout << "Local variable is printed out here: " << variable;

    // If you want to use the global variable with the same name, you can use the scope resolution operator (::)
    cout << "\nIf you have declared both global and local variables with the same name and you want the global variable to be used, you can do this through the scope resolution operator. Global variable is: " << ::variable;

    // Additional knowledge:
    // 1. Local variables have a limited scope and are only accessible within the block or function in which they are declared.
    // 2. Global variables can be accessed from any part of the program, which can lead to unintended changes if not used carefully.
    // 3. It is generally recommended to minimize the use of global variables and prefer local variables to improve code modularity and maintainability.

    // Indicate successful completion of the program
    return 0;
}
