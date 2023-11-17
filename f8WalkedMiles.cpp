/*A pedometer treats walking 2,000 steps as walking 1 mile. Write a program that asks the user to type in how many steps they walked. The program will then tell them how many miles the equates to. It will continue to ask the user to enter steps and convert to miles until the user types a negative for the number of steps. The program will then print out the total miles they walled for all steps entered. It should have the following function:
StepsToMiles - this function has users steps passed in and returns the numbers of miles they walked

Define the function below main and put the prototype before main.

Sample Output

Type a negative number for the number of steps to exit
Enter the number of steps: 7451
You walked 3.73 miles
Enter the number of steps: 12410
You walked 6.21 miles
Enter the number of steps: 18472
You walked 9.24 miles
Enter the number of steps: -1


You walked a total of  19.17 miles*/
#include <iostream>
#include <iomanip>
using namespace std;
double StepsToMiles(double);
int main()
{
    cout << "Type a negative number for the number of steps to exit" << endl;
    double totalMiles = 0.0; // Variable to accumulate total miles

    while (true)
    {
        cout << "Enter the number of steps: ";
        int num;
        cin >> num;

        // Check if the user entered a negative number to exit the loop
        if (num < 0)
        {
            break;
        }
        // Update total miles with the miles walked for the current entry
        totalMiles += StepsToMiles(num);
        cout << "You walked " << fixed << setprecision(2) << StepsToMiles(num) << " miles" << endl;
    }
    // Print the total miles walked
    cout << "\nYou walked a total of " << fixed << setprecision(2) << totalMiles << " miles" << endl;
    return 0;
}
// Function to convert steps to miles
double StepsToMiles(double num1)
{
    // 1mile=2000steps
    return num1 / 2000.0;
}