/*30. Write a C++ program to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    double total;
    double average;
    cout << "Input 1st two numbers (separated by space) : ";
    cin >> num1 >> num2;
    cout << "Input last two numbers (separated by space) : ";
    cin >> num3 >> num4;
    total = num1 + num2 + num3 + num4;
    cout << "The total of four numbers is : " << total << endl;
    average = total / 4; /*Average This is the arithmetic mean, and is calculated by adding a group of numbers and then dividing by the count of those numbers. */
    cout << "The average of four numbers is : " << average;
    return 0;
}