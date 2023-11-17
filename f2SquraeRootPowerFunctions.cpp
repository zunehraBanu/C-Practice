// This program serves as a practice exercise for utilizing built-in functions in C++.
//               It demonstrates the use of functions like pow() and sqrt() to perform exponentiation and square root calculations.
#include <iostream>
#include <cmath> //In C++, the <cmath> header provides a collection of functions for performing mathematical operations.
/*In this example, <cmath> is used to access the sqrt() and pow() functions for calculating the square root and raising a number to a power, respectively.
 */
using namespace std;
int main()
{
    // Declare variables to store user input
    int a, b;

    // Prompt the user to enter two integers
    cout << "Enter 2 integers: ";

    // Read the values of 'a' and 'b' from user input
    cin >> a;
    cin >> b;

    // Calculate and display the result of 'a' raised to the power 'b'
    cout << a << " to the power " << b << " is: " << pow(a, b);

    // Declare a variable to store user input for square root calculation
    double squareRoot;

    // Prompt the user to enter a number for square root calculation
    cout << "\nFind out square root of any number: " << endl;
    cout << "Enter a number: ";

    // Read the value of 'squareRoot' from user input
    cin >> squareRoot;

    // Calculate and display the square root of the entered number
    cout << squareRoot << "square root is: " << sqrt(squareRoot);

    // Indicate successful completion of the program
    return 0;
}