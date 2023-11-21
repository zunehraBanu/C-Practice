// Pass by reference Example 2
#include <iostream>
using namespace std;

// Function prototype
void function1(int &y, int x);
int main()
{
    // Initialize variables
    int x = 5;
    int y = 2;

    // Display initial values of x and y
    cout << "A: " << x << " " << y << endl;

    // Call function1 with arguments x and y (pass by reference)
    function1(x, y);

    // Display values of x and y after calling function1
    cout << "D: " << x << " " << y << endl;
}
// Function definition for function1 (pass by reference)
void function1(int &y, int x)
{
    // Display values of x and y received as parameters
    cout << "B: " << x << " " << y << endl;

    // Modify the local copy of x and the referenced y within the function
    x = 12;
    y = 10 + y;

    // Display modified values of x and y within the function
    cout << "C: " << x << " " << y << endl;
}