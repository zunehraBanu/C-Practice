/*Write the program below. It should use the following function:

maxMagnitude - this function has two integers passed in and returns the integer with the largest magnitude.

Define the function below main and put the prototype before main.

Note: The function does not return the largest value, which for -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.

Sample Output

Enter two integers: 5 7
The integer with the largest magnitude is 7
Ex: If the inputs are:

Enter two integers: -8 -2
The integer with the largest magnitude is -8*/
#include <iostream>
using namespace std;
#include <climits>

// Function prototype for maxMagnitude
int maxMagnitude(int, int);
int main()
{
    cout << "Enter two integers: ";
    int a;
    int b;

    // Input two integers
    cin >> a >> b;

    // Call the maxMagnitude function and display the result
    cout << "The integer with the largest magnitude is " << maxMagnitude(a, b);

    // Indicate successful completion of the program
    return 0;
}

// Function to determine the integer with the largest magnitude
int maxMagnitude(int num1, int num2)
{
    int largestMagnitude = INT_MIN; // Initialize with a very small value to ensure it gets updated

    // Check if either of the numbers is negative, and if so, take the absolute value
    if (num1 < 0 || num2 < 0)
    {
        num1 = abs(num1);
        num2 = abs(num2);
    }

    // Determine the larger magnitude between the two numbers
    if (num1 > num2)
    {
        largestMagnitude = num1;
    }
    else
    {
        largestMagnitude = num2;
    }

    // Return the result
    return largestMagnitude;
}
