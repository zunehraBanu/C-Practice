/*27. Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/

#include <iostream>
using namespace std;
int main()
{
    double celsiusTemp, kelvinTemp;
    cout << "Convert temperature in Celsius to Kelvin :" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Celsius : ";
    cin >> celsiusTemp;
    cout << "The temperature in Celsius : " << celsiusTemp << endl;
    kelvinTemp = celsiusTemp + 273.15; // Formula for converting Celsius temperature into Kelvin temperature: 0°C + 273.15 = 273.15K
    cout << "The temperature in Kelvin : " << kelvinTemp;
    return 0;
}