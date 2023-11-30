/*13.2 Hailstone sequence
Given a positive integer num, the following rules will always create a sequence that ends with 1, called the hailstone sequence:

If num is even, divide it by two
If num is odd, multiply it by 3 and add 1 (i.e. 3 * num +1)
Continue until num is 1
Write a program that reads an integer as input and prints the hailstone sequence starting with the integer entered. Format the output so that ten integers, each separated by a tab character (\t), are printed per line. (Hint: modulus operator might be useful) End the last line of output with a new line (endl).

The output format can be achieved as follows:
cout << num << "\t";

Ex: If the input is:

Enter a number: 25

25   76   38   19   58   29   88   44   22   11
34   17   52   26   13   40   20   10   5    16
8    4    2    1*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    int count = 0;
        // Get user input
    cout << "Enter a number: ";
    cin >> number;
    cout << endl;
     // Generate and print the hailstone sequence
    while (number != 1)
    {
        // Print the current number, separated by a tab
        cout << number << "\t";
        // Increment the count and start a new line if count reaches 10
        count++;
        if (count == 10)
        {
            cout << endl;
            count = 0;
        }
        // Update the number according to hailstone sequence rules
        if (number % 2 == 0)
        {
             // If the number is even, divide it by 2
            number = number / 2;
        }
        else
        {
            // If the number is odd, multiply it by 3 and add 1
            number = number * 3 + 1;
        }
    }
     // Print the final "1" at the end of the sequence
    cout << "1" << endl;
    return 0;
}