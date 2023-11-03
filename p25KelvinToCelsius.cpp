/*25. Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85*/

#include <iostream>
using namespace std;
int main()
{
    double kelvinTemp, celsiusTemp;
    cout << "Convert temperature in Kelvin to Celsius :" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvinTemp;
    cout << "The temperature in Kelvin : " << kelvinTemp << endl;
    celsiusTemp = kelvinTemp - 273.15; // Formula of converting kelvin temperature to Celsius temperature:  0K − 273.15 = -273.1°C
    cout << "The temperature in Celsius : " << celsiusTemp;
    return 0;
}
