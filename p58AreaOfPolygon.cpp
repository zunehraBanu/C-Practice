/*58. Write a C++ program to print the area of a polygon.
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821*/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    /*M_PI is a constant from the <cmath> library that represents the mathematical constant π (approximately 3.14159265358979323846).*/
    /*In C++, you can use the tan function from the <cmath> library to calculate the tangent of an angle. To use tan, you need to include the <cmath> header at the beginning of your C++ program.*/
    double area, side, number;
    cout << "Print the area of a polygon:" << endl;
    cout << "---------------------------------" << endl;
    cout << "Input the number of sides of the polygon: ";
    cin >> number;
    cout << "Input the length of each side of the polygon: ";
    cin >> side;
    area=(number * side * side) / (4 * tan(M_PI / number));
    cout << "The area of the polygon is: " << area;
    return 0;
}