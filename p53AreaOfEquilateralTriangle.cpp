/*53. Write a C++ program to calculate the area of an equilateral triangle.
Sample Output:
Calculate the area of the Equilateral Triangle :
----------------------------------------------------
Input the value of the side of the equilateral triangle: 5
The area of equilateral triangle is: 10.8253*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double side, area;
    cout << "Calculate the area of the Equilateral Triangle :" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the value of the side of the equilateral triangle: ";
    cin >> side;
    area = sqrt(3) / 4 * (side * side); /// Area of equilateral triangle is root3/4*side*side
    cout << "The area of equilateral triangle is: " << area;
    return 0;
}