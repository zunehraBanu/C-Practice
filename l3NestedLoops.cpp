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
    // Declare variables to store user input
    char character;
    int height;
    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> character;
    // Prompt the user to enter the triangle height
    cout << "Enter triangle height: ";
    cin >> height;
    cout << endl;
    // Outer loop for each row of the triangle
    for (int i = 1; i <= height; i++)
    {
        // Inner loop for printing characters in each row
        for (int j = 1; j <= i; j++)
        {
            // Print the specified character followed by a space
            cout << character << " ";
        }
        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}