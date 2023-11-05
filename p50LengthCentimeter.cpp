/*50. Write a C++ program to enter length in centimeters and convert it into meters and kilometers.
Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5*/

#include <iostream>
using namespace std;
int main()
{
    double distance, meter, kilometer;
    cout << "Convert centimeter into meter and kilometer :" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Input the distance in centimeter : ";
    cin >> distance;
    meter = distance / 100.0;
    cout << "The distance in meter is: " << meter << endl;
    kilometer = distance / 100000.0;
    cout << "The distance in kilometer is: " << kilometer;
    return 0;
}