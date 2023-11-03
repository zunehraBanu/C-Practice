/*13. Write a C++ program that swaps two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Input 1st number : ";
    cin >> num1;
    cout << "Input 2nd number : ";
    cin >> num2;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout << "After swapping the 1st number is : " << num1 << endl;
    cout << "After swapping the 2nd number is : " << num2;
    return 0;
}