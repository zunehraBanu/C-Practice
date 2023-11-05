/*26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300*/

#include <iostream>
using namespace std;
int main()
{
    const double FAHRENHEIT_TO_KELVIN_OFFSET = 273.15;
    const double FAHRENHEIT_TO_CELSIUS_FACTOR = 5.0 / 9.0;

    double fahrenheitTemp, kelvinTemp;
    cout << "Convert temperature in Fahrenheit to Kelvin :" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> fahrenheitTemp;
    cout << "The temperature in Fahrenheit : " << fahrenheitTemp << endl;
    kelvinTemp = (fahrenheitTemp - 32) * FAHRENHEIT_TO_CELSIUS_FACTOR + FAHRENHEIT_TO_KELVIN_OFFSET; /* Formula of converting fahrenheit temperature to kelvin temperature
   (32°F − 32) × 5/9 + 273.15 = 273.15K */
    cout << "The temperature in Kelvin : " << kelvinTemp;
    return 0;
}