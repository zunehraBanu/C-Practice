/*16. Write a C++ program that calculates the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32*/

#include <iostream>
using namespace std;

int main()
{
    double radius, height, volume;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    volume = 3.14 * radius * radius * height; // A cylinder's volume is π*r²*h
    cout << "The volume of a cylinder is : " << volume;
    return 0;
}