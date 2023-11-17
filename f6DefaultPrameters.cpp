/*This program demonstrates the concept of default parameter values.
    Default parameter values are values assigned to function parameters in the function declaration.
    If a calling function does not explicitly pass a value for a parameter, the default value is used.*/

// Default parameter value - It is a value in the function declarartion automatically assigned by the computer if the calling function does not pass any value to that argument.

#include <iostream>
using namespace std;
// Function to add three integers with default parameter values
int addIntegers(int a, int b = 2, int c = 1) // important if we have given b a default value then next parameters should also be given default value, otherwise it will throw an error.
{
    // The parameters 'b' and 'c' have default values (2 and 1, respectively)
    // If these parameters are not explicitly passed in the function call, the default values will be used
    return (a + b + c);
}
int main()
{
    // Calling the function with only one value explicitly provided
    // The default values for 'b' and 'c' will be used in this case
    cout << addIntegers(2) << endl; // here I am only passing 1 value so it will take default values.

    // Calling the function with two values explicitly provided
    // The default value for 'c' will be used in this case
    cout << addIntegers(2, 4) << endl; // In this case as I am explicitily passing value of parameter b then it will not take default value , It will take the value that I am explicitly writing which is 4 here.

    // Calling the function with all three values explicitly provided
    // The provided values will override the default values
    cout << addIntegers(2, 3, 2) << endl; // I am passing all the three values here so these values are considered.

    // Indicate successful completion of the program
    return 0;
}