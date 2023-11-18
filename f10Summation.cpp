/*Copy the main given below and add what the directions tell you to edit
main to Copy

#include<iostream>
using namespace std;

// Put prototype here


int main()
{
    int startValue;
    int stopValue;
    int answer;
    char again;
    do
    {
        cout << "Enter the start value: ";
        cin >> startValue;
        cout << "Enter the stop value: ";
        cin >> stopValue;

        // Call the function summation (after you write it)
        // and store the value returned into the variable answer
        // declared above
        // You can assume that start value is less than or equal
        // to stop value
        // The description of the function is given below
        // Don't forget to put prototype at top



        cout << "The summation from " << startValue << " to " << stopValue << " is " << answer << endl;

        cout << "Do you want to find another summation (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
}

// Write  function called summation. The function will have
// 2 formal parameters. The first formal parameter is the start
// value and the second formal parameter is the stop value.
// You can assume start value is less than or equal to stop value
// The method will find the summation from the first value
// to the stop value and return the answer
// The function should have a loop

// for example, if start value is 2 and stop value is 5, the
// program will return the value 14 (2 + 3 + 4 + 5)
Sample Output

Enter the start value: 2
Enter the stop value: 5
The summation from 2 to 5 is 14
Do you want to find another summation (y/n): y
Enter the start value: -3
Enter the stop value: 15
The summation from -3 to 15 is 114
Do you want to find another summation (y/n): Y
Enter the start value: 3
Enter the stop value: 12
The summation from 3 to 12 is 75
Do you want to find another summation (y/n): n*/

#include <iostream>
using namespace std;

// Function prototype for summation function
int summation(int startValue, int stopValue);

int main()
{
    int startValue;
    int stopValue;
    int answer;
    char again;

    // Start a do-while loop to allow the user to calculate multiple summations
    do
    {
        // Prompt user to enter the start value
        cout << "Enter the start value: ";
        cin >> startValue;

        // Prompt user to enter the stop value
        cout << "Enter the stop value: ";
        cin >> stopValue;

        // Call the summation function and store the result in the 'answer' variable
        answer = summation(startValue, stopValue);

    // Display the result of the summation
        cout << "The summation from " << startValue << " to " << stopValue << " is " << answer << endl;

     // Ask the user if they want to find another summation
        cout << "Do you want to find another summation (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    // Display a newline for better formatting
    cout << endl;

    // Return 0 to indicate successful program execution
    return 0;
}

// Function to calculate the summation of integers from startValue to stopValue
int summation(int startValue, int stopValue)
{
    int sum = 0;

    // Iterate through the range [startValue, stopValue] and accumulate the sum
    for (int i = startValue; i <= stopValue; i++)
    {
        sum += i;
    }

    // Return the calculated sum
    return sum;
}