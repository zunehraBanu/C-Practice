// Program: Pass by Value Example
// Pass by value - Paramter values are copied to another variables.
/*This program demonstrates the concept of pass by value, where parameter values are copied to other variables.
    The main function initializes a variable 'a' with the value 5, and then calls a function 'changeValue'
    with 'a' as an argument. The function modifies its parameter locally, but the original variable 'a' in
    the main function remains unchanged.*/

#include <iostream>
using namespace std;

// Function to change the value of its parameter (pass by value)
void changeValue(int z) // int z is formal parameter because it in defination of function.
{
    // The parameter 'z' is a local variable inside this function
    // Changes made to 'z' do not affect the original variable passed from the main function
    z = 100;
}
int main()
{
    // Declare and initialize a variable 'a' with the value 5
    int a = 5;

    // Call the function 'changeValue' with the variable 'a' as an argument
    // The value of 'a' is passed to the function, but any changes made to the parameter inside the function do not affect 'a'
    changeValue(a); // 'a' is the actual parameter because it is the value passed to the function during the function call.

    // Display the value of 'a' after the function call
    cout << "The value of 'a' after the function call: " << a;

    // Indicate successful completion of the program
    return 0;
}