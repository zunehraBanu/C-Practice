/*24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33*/

#include <iostream>
using namespace std;
int main()
{
    double kelvinTemp, fahrenheitTemp;
    cout << "Convert temperature in Kelvin to Fahrenheit :" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvinTemp;
    cout << "The temperature in Kelvin : " << kelvinTemp<<endl;
    fahrenheitTemp = (kelvinTemp - 273.15) * 9 / 5 + 32; /* Formula of converting kelvin temperature to Fahrenheit temperature: 
    (0K − 273.15) × 9/5 + 32 = -459.7°F*/
    cout << "The temperature in Fahrenheit : " << fahrenheitTemp;
    return 0;
}