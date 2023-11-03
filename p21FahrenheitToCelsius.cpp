/*21. Write a C++ program to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35*/

#include <iostream>
using namespace std;
int main()
{
    int fahrenheit;
    int celsius;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> fahrenheit;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    celsius = ((fahrenheit * 5.0) - (5.0 * 32)) / 9;
    cout << "The temperature in Celsius : " << celsius;
    return 0;
}
