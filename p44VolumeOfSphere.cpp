/*44. Write a C++ program to get the volume of a sphere with radius 6.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.599*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double radius, volume;
    cout << "Calculate the volume of a sphere :" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Input the radius of a sphere : ";
    cin >> radius;
    volume = 4 / 3.0 * M_PI * radius * radius * radius; /*The formula for the volume of a sphere is V = 4/3*π*r³, where V = volume and r = radius. The radius of a sphere is half its diameter.*/
    cout << "The volume of a sphere is : " << volume;
    return 0;
}