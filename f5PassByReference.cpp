// Pass by reference - Variable itself is passed. Ampersand(&) operaror is used.
// pass by reference will allow us to access same memory place with differet names.
// when we want to change the variable that we are passing as a parameter into a function then we use pass by function and when we dont want to do changes then we do pass by value.

/*This program demonstrates the concept of pass by reference, where variables are passed by reference using the ampersand (&) operator.
    Pass by reference allows functions to access and modify the same memory location, providing a way to change the value of variables
    passed to a function. The program also illustrates the use of reference variables. */

#include <iostream>
using namespace std;

// Function to change the values of two variables using pass by reference
void changeValue(int &z, int &y)
{
    // The parameters 'z' and 'y' are references, allowing changes made inside the function to affect the variables in the calling function
    z = 100;
    y = 99;
}
int main()
{
    // Declare and initialize a variable 'p'
    int p = 5;

    // Declare a reference variable 'q' that refers to the same memory location as 'p'
    int &q = p;

    // Display the initial value of 'q'
    cout << "q value is: " << q;

    // Increment the value of 'q', which affects the original variable 'p'
    q++;

    // Display the value of 'p' after modifying 'q'
    cout << "\np value after: " << p;

    // Display the memory addresses of 'p' and 'q'
    cout << "\nAddress pf p is: " << &p << endl;
    cout << "Address of q is: " << &q << endl;

    // Declare and initialize two variables 'a' and 'b'
    int a = 7;
    int b = 4;

    // Call the function 'changeValue' with 'a' and 'b' as parameters
    // 'a' and 'b' are passed by reference, so changes made inside the function affect the original variables
    changeValue(a, b);
    changeValue(a, b);

    // Display the updated values of 'a' and 'b'
    cout << a << endl; // 'z' and 'a' are accessing the same memory location, so changing 'z' also changes 'a'
    cout << b << endl;

    // Indicate successful completion of the program
    return 0;
}