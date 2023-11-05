/*43. Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5398
The circumference of the circle is : 31.4159*/
// same as 19

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double radius, area, circumference;
    cout << "Find the area and circumference of any circle :" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;
    cout << M_PI;
    area = M_PI * radius * radius; // area of a circle = pi*r^2
    cout << "The area of the circle is : " << area << endl;
    circumference = 2 * M_PI * radius; // circumference of a circle = 2pir
    cout << "The circumference of the circle is : " << circumference;
    return 0;
}