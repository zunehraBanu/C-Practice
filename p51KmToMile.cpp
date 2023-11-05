/*51. Write a C++ program that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10685 Miles/hr.*/

#include <iostream>
using namespace std;
int main()
{
    double miles, kilometer;
    cout << "Convert kilometers per hour to miles per hour :" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the distance in kilometer : ";
    cin >> kilometer;
    miles = kilometer * 0.621371; // 1 km/h = 0.621371 mph
    cout << "The " << kilometer << " Km./hr. means " << miles << " Miles/hr.";
    return 0;
}