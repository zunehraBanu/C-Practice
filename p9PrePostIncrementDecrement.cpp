/*9. Write a C++ program to display the operation of pre and post increment and decrement.
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    cout << "Display the operation of pre and post increment and decrement :\n";
    cout << "--------------------------------------------------------------------\n";
    cout << "The number is : " << num << endl;
    num++;
    cout << "After post increment by 1 the number is : " << num << endl;
    ++num;
    cout << "After pre increment by 1 the number is : " << num << endl;
    num = num + 1;
    cout << "After increasing by 1 the number is : " << num << endl;
    num--;
    cout << "After post decrement by 1 the number is : " << num << endl;
    --num;
    cout << "After pre decrement by 1 the number is : " << num << endl;
    num = num - 1;
    cout << "After decreasing by 1 the number is : " << num << endl;
    return 0;
}