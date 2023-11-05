/*45. Write a C++ program to calculate the volume of a cone.
Sample Input: 5 3
Sample Output:
Input Cone's radius: Input Cone's height: The volume of the cone is: 78.5398*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double radius, height, volume;
    cout << "Input Cone's radius: ";
    cin >> radius;
    cout << "Input Cone's height: ";
    cin >> height;
    volume = M_PI * radius * radius * (height / 3.0); // V=πr2h/3
    cout << "The volume of the cone is: " << volume;
    return 0;
}