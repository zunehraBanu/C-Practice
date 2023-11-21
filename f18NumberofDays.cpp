/*Write a function that accepts the month(as an integer) and returns the number of days in the month. The function should be called daysInMonth.*/
#include <iostream>
using namespace std;
int daysInMonth(int monthInteger);
int main()
{
    int days, integer;
    days = daysInMonth(integer);
    cout << "The days in a month is: " << days;
    return 0;
}
int daysInMonth(int monthInteger)
{
    cout << "Enter number of a month: ";
    cin >> monthInteger;
    int days;
    switch (monthInteger)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 2:
        days = 28; // Assuming a non-leap year
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = -1;
        cout << "Invalid month";
    }
    return days;
}