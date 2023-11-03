/*19. Write a C++ program to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159*/

#include <iostream>
using namespace std;
int main()
{
    double radius;
    double area;
    double circumference;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;
    area = 3.14159 * radius * radius; // area of a circle = pi*r^2
    cout << "The area of the circle is : " << area << endl;
    circumference = 2 * 3.14159 * radius; // circumference of a circle = 2pir
    cout << "The circumference of the circle is : " << circumference;
    return 0;
}