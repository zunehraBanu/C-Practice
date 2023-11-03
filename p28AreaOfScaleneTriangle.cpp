/*28. Write a C++ program to find the area of the Scalene Triangle.
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793*/

/*In geometry, a scalene triangle is a type of triangle in which all three sides have different lengths, and all three interior angles have different measures. In other words, a scalene triangle has no sides that are of equal length and no angles that are of equal measure.
The sum of the interior angles of a scalene triangle is always 180 degrees.*/

#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;
int main()
{
    double side1, side2, angle, area;
    cout << "Find the area of Scalene Triangle :" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Input the length of a side of the triangle : ";
    cin >> side1;
    cout << "Input the length of another side of the triangle : ";
    cin >> side2;
    cout << "Input the angle between these sides of the triangle : ";
    cin >> angle;
    /* calculation part of area //Convert the angle from degrees to radians
     double angleInRadians = angle * M_PI / 180.0;

     Calculate the area of the triangle using the formula: 0.5 * side1 * side2 * sin(angle)
    double area = 0.5 * side1 * side2 * sin(angleInRadians);*/
    area = (side1 * side2 * sin((PI / 180) * angle)) / 2;
    cout << "The area of the Scalene Triangle is : " << area;
    return 0;
}
