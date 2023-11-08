/*4. Write a program in C++ to print the sum of two numbers using variables.
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
same as 2nd program */

#include <iostream>
using namespace std;
int main()
{
    // Output a title for the program
    cout<<"Print the sum of two numbers :"<<endl;
    cout<<"-----------------------------------"<<endl;
    // Declare and initialize two integer variables
    int num1 = 29;
    int num2 = 30;
    int sum = num1 + num2;
    // Display the result, including the numbers and their sum
    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum;
    // Return 0 to indicate successful program execution
    return 0; 
}