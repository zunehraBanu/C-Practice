/*12. Write a C++ program to add two numbers and accept them from the keyboard.
Sample Output:
sum of two numbers :
-------------------------
Input 1st number : 25
Input 2nd number : 39
The sum of the numbers is : 64*/

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Input 1st number : ";
    cin >> num1;
    cout << "Input 2nd number : ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "The sum of the numbers is : " << sum;
    return 0;
}