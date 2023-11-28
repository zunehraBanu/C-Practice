/*13.4 Fall 2023 Print Zeros
Write the program to give the following output. In theory, this program uses all three loops. (Hint: This program is VERY similar to one that was discussed on a video)

Sample Output

Enter a number between 1 and 50: 10
10 zeros: 0000000000

Do you want to do it again (y/n): Y

Enter a number between 1 and 50: -2
Invalid number - try again!!!
Enter a number between 1 and 50: 0
Invalid number - try again!!!
Enter a number between 1 and 50: 50
50 zeros: 00000000000000000000000000000000000000000000000000

Do you want to do it again (y/n): y

Enter a number between 1 and 50: 15
15 zeros: 000000000000000

Do you want to do it again (y/n): y

Enter a number between 1 and 50: 51
Invalid number - try again!!!
Enter a number between 1 and 50: -1
Invalid number - try again!!!
Enter a number between 1 and 50: 150
Invalid number - try again!!!
Enter a number between 1 and 50: 38
38 zeros: 00000000000000000000000000000000000000

Do you want to do it again (y/n): Y

Enter a number between 1 and 50: 2
2 zeros: 00

Do you want to do it again (y/n): n*/
#include <iostream>
using namespace std;
int main()
{
    // Variable to store user input for repeating the program
    char input;

    // Main do-while loop to repeat the program based on user input
    do
    {
        // Variable to store the user-entered number
        int number;
        // Prompt the user to enter a number between 1 and 50
        cout << "Enter a number between 1 and 50: ";

        // Input validation loop to ensure the entered number is within the valid range
        do
        {
            cin >> number;
            // Check if the entered number is outside the valid range
            if (number < 1 || number > 50)
            {
                cout << "Invalid number - try again!!!" << endl;
                cout << "Enter a number between 1 and 50: ";
            }
        } while (number < 1 || number > 50);

        // Display the number of zeros based on the user-entered number using a for loop
        cout << number << " zeros: ";
        for (int i = 0; i < number; i++)
        {
            cout << "0";
        }
        cout << endl;
        // Prompt the user if they want to repeat the program
        cout << "\nDo you want to do it again (y/n): ";
        cin >> input;

    } while (input == 'y' || input == 'Y'); // Continue the loop if the user enters 'y' or 'Y'

    cout << endl;
    return 0;
}