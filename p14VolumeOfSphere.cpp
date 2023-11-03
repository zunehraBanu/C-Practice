/*14. Write a C++ program that calculates the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32*/

#include <iostream>
using namespace std;
int main()
{
    double radius, volume;
    cout << "Input the radius of a sphere : ";
    cin >> radius;
    volume = 4.0 / 3 * 3.14 * radius * radius * radius; /*The formula for the volume of a sphere is V = 4/3*π*r³, where V = volume and r = radius. The radius of a sphere is half its diameter.*/
    cout << "The volume of a sphere is : " << volume;
    return 0;
}