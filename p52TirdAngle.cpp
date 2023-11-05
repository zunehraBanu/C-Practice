/*22. Write a C++ program to find the third angle of a triangle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90*/

//same as 22

#include <iostream>
using namespace std;
int main()
{
    int angle1;
    int angle2;
    int angle3;
    cout << "Input the 1st angle of the triangle : ";
    cin >> angle1;
    cout << "Input the 2nd angle of the triangle : ";
    cin >> angle2;
    angle3 = 180 - angle2 - angle1; // The sum of all the angle of a triangle = 180°
    cout << "The 3rd of the triangle is : " << angle3;
    return 0;
}