//Function for calculating area of a rectangle
#include <iostream>
using namespace std;

/*Function:

Definition: A function is a block of code that performs a specific task. It is a modular and reusable unit of a program.
Purpose: Functions help in organizing code, making it more readable, and promoting code reusability.
3 important things in function:
1)Function Prototype
2)Function Call
3)Function Definition
*/

/*Function Prototype:

Definition: A function prototype is a declaration of a function that tells the compiler about the function's name, return type, and the types of its parameters (if any). It provides information to the compiler about how the function will be called.
Syntax: return_type function_name(parameter_type1, parameter_type2, ...);*/

// Function prototype for calculating area
double calculateArea(double len, double wid); //[Function prototype and Function header are the same the difference is there is semicolon at the end in Function prototype]
int main()
{
    double length, width;
    double area;

    // Prompt user to type a negative number to exit
    cout << "Type a negative to exit\n";

    // Get initial length input
    cout << "Enter length: ";
    cin >> length;

    // Continue loop until a negative length is entered
    while (length >= 0)
    {
        // Get width input
        cout << "Enter width: ";
        cin >> width;

        /*Function Call:

        Definition: A function call is an instruction that tells the program to execute the code inside a specific function.
        Syntax: function_name(argument1, argument2, ...);
        Example: area = calculateArea(length, width);*/

        // Calculate area using the function
        area = calculateArea(length, width);

        // Display result
        cout << "A " << length << " by " << width << " rectangle has an area of " << area;
        cout << endl
             << endl;

        // Prompt user for next length input
        cout << "Enter length: ";
        cin >> length;
    }

    return 0;
}

/*Function Definition:

Definition: A function definition is where the actual code for the function is written. It specifies what the function does when it is called.
Syntax:
return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2, ...)
{
    // Function body (code)
}*/

// Function to calculate the area of a rectangle
double calculateArea(double len, double wid) // Function header
{
    // Calculate and return the area
    double area = len * wid;
    return area;
}