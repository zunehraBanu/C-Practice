/*46. Write a C++ program to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double radius, height, volume;
    cout << "Calculate the volume of a cylinder :" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    volume = M_PI * radius * radius * height; // pi*r*r*h
    cout << "The volume of a cylinder is : " << volume;
    return 0;
}