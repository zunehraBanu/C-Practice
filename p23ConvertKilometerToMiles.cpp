/*23. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.*/

#include <iostream>
using namespace std;
int main()
{
    float kmph, miph;
    cout << "Convert kilometers per hour to miles per hour :" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the distance in kilometer : ";
    cin >> kmph;
    miph = (kmph * 0.6213712); // 1 km/h = 0.6213712 mph
    cout << "The " << kmph << " Km./hr. means " << miph << " Miles/hr.";
    return 0;
}