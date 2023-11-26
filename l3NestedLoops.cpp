/*13.3 Drawing a right triangle
Write a program to print a right triangle. The user will type in the height of the triangle and the character to use to print the triangle. (See output below)



The program should use 2 nested for loops. It is similar to Challenge Activity 4.8.1.

Sample Output #1

Enter a character: %
Enter triangle height: 5

%
% %
% % %
% % % %
% % % % %
Sample Output #1

Enter a character: ?
Enter triangle height: 3

?
? ?
? ? ? */
#include <iostream>
using namespace std;
int main()
{
    char character;
    int height;
    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter triangle height: ";
    cin >> height;
    cout << endl;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
        }
        cout << endl;
    }

    return 0;
}