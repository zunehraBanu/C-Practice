/*4. Write a program in C++ to print the sum of two numbers using variables.
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
same as 2nd program */

#include <iostream>
using namespace std;
int main()
{
    int num1 = 29;
    int num2 = 30;
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum;
    return 0;
}