/*20. Write a C++ program to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95*/

#include <iostream>
using namespace std;
int main()
{
    int celsius;
    int fahrenheit;
    cout << "Input the temperature in Celsius : ";
    cin >> celsius;
    cout << "The temperature in Celsius : " << celsius << endl;
    fahrenheit = ((celsius * 9 / 5) + 32); // Formula of Celsius to Farenheit = (0°C × 9/5) + 32 = 32°F
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}