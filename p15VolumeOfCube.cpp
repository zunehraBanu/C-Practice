/*15. Write a C++ program that calculates the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125*/

#include <iostream>
using namespace std;

int main()
{
    double side, volume;
    cout << "Input the side of a cube : ";
    cin >> side;
    volume = side * side * side; // Volume of cube = s3, where s is the side length of the cube.
    cout << "The volume of a cube is : " << volume;
    return 0;
}