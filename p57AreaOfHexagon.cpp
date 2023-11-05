/*57. Write a C++ program to print the area of a hexagon.
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double side, area;
    cout << "Print the area of a hexagon: " << endl;
    cout << "---------------------------------" << endl;
    cout << "Input the side of the hexagon: ";
    cin >> side;
    area = 3 * sqrt(3) / 2 * side * side; // area of a hexagon
    cout << "The area of the hexagon is: " << area;
    return 0;
}