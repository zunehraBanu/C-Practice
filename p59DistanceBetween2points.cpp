/*59. Write a C++ program to compute the distance between two points on the surface of the earth.
Sample Output:
Print the the distance between two points on the surface of earth:
-----------------------------------------------------------------------
Input the latitude of coordinate 1: 25
Input the longitude of coordinate 1: 35
Input the latitude of coordinate 2: 35.5
Input the longitude of coordinate 2: 25.5
The distance between those points is: 1480.08*/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    const double EARTHRADIUS = 6371.0; // Radius of the Earth in kilometers
    const double R = M_PI / 180;       // Pi/180=3.14159/180
    double latitude1, latitude2, longitude1, longitude2, distance, r;
    cout << "Print the the distance between two points on the surface of earth:" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Input the latitude of coordinate 1: ";
    cin >> latitude1;
    cout << "Input the longitude of coordinate 1: ";
    cin >> longitude1;
    cout << "Input the latitude of coordinate 2: ";
    cin >> latitude2;
    cout << "Input the longitude of coordinate 2: ";
    cin >> longitude2;
    latitude1 = latitude1 * R;
    latitude2 = latitude2 * R;
    longitude1 *= R;
    longitude2 *= R;
    distance = EARTHRADIUS * acos((sin(latitude1) * sin(latitude2)) + (cos(latitude1) * cos(latitude2) * cos(longitude1 - longitude2)));
    cout << "The distance between those points is: " << distance;
    return 0;
}