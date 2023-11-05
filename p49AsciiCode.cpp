/*49. Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.
Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a*/

#include <iostream>
using namespace std;
int main()
{
    char user;
    cout << "Print code (ASCII code / Unicode code etc.) of a given character:" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Input a character: ";
    cin >> user;
    cout << "The ASCII value of " << user << " is: " << int(user) << endl;
    cout << "The character for the ASCII value " << int(user) << " is: " << user;
    return 0;
}