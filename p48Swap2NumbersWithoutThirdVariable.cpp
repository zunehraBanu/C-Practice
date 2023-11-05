/*48. Write a C++ program that swaps two variables without using a third variable.
Sample Output:
Swap two numbers without using third variable:
---------------------------------------------------
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Swap two numbers without using third variable:" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Input 1st number : ";
    cin >> num1;
    cout << "Input 2nd number : ";
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swapping, the 1st number is : " << num1 << endl;
    cout << "After swapping, the 2nd number is : " << num2;
    return 0;
}