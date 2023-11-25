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
    cout << "Enter a number: ";
    cin >> number;
    cout << endl;
    while (number != 1)
    {
        cout << number << "\t";
        count++;
        if (count == 10)
        {
            cout << endl;
            count = 0;
        }
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = number * 3 + 1;
        }
    }
    cout << "1" << endl;
    return 0;
}