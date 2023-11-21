//Pass by value example
/*In this function, int y and int x are parameters passed by value. Any changes made to x and y inside the function are only local to the function and do not affect the variables x and y in the main() function.*/

/*Pass by value" is a method of passing arguments to a function in programming languages. In this approach, the actual values of the arguments are passed to the function. The function works with the copies of the values, and any modifications made to the parameters inside the function do not affect the original values outside the function.

Here's a brief explanation of pass by value:

Copy of Values:
When you pass parameters by value to a function, the function receives a copy of the actual values passed as arguments.

No Impact on Original Values:
Any modifications made to the parameters within the function have no impact on the original values of the variables outside the function.

Local Scope:
The parameters in the function have local scope, meaning they are only accessible within the function.

Efficiency:
Pass by value is generally efficient because it involves copying simple data types, such as integers or floats. However, for large data structures, it may have performance implications due to the need to copy a significant amount of data.*/

#include <iostream>
using namespace std;
void function1(int y, int x);
int main()
{
    int x = 5;
    int y = 7;

    // Display the initial values of x and y
    cout << x << " " << y << endl; // Output: 5 7

    // Call function1 with arguments x and y
    function1(x, y);

    // Display the values of x and y after calling function1
    cout << x << " " << y << endl;
    return 0;
}

// Function definition for function1
void function1(int y, int x)
{
    cout << x << " " << y << endl; // Output: 7 5

    // Modify the local copies of x and y within the function
    x = 12;
    y = 10 + y; // y is updated to 10 + 5 = 15

    // Display the modified values of x and y within the function
    cout << x << " " << y << endl;
}