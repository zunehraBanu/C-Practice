/*29. Write a C++ program to compute the quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1*/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int num1, num2, remainder, quotient;
    cout << "Input the dividend : ";
    cin >> num1;
    cout << "Input the divisor : ";
    cin >> num2;
    quotient = num1 / num2;
    cout << "The quotient of the division is : " << quotient << endl;
    remainder = num1 % num2; /*In C++, the modulus operator % is used to find the remainder when one integer is divided by another. It calculates the remainder of the division operation and is often used with integers.*/
    cout << "The remainder of the division is : " << remainder;
    return 0;
}