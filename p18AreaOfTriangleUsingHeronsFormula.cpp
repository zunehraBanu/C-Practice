/*18. Write a C++ program to find the area of any triangle using Heron's formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253*/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double side1, side2, side3, s;
    cout << "Input the length of 1st side of the triangle : ";
    cin >> side1;
    cout << "Input the length of 2nd side of the triangle : ";
    cin >> side2;
    cout << "Input the length of 3rd side of the triangle : ";
    cin >> side3;
    s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); /* Heron's formula of Area = Square root of√s(s - a)(s - b)(s - c) where s is half the perimeter, or (a + b + c)/2  */
    cout << "The area of the triangle is : " << area;
    return 0;
}
