/*64. Write a C++ program to compute the sum of the two given integers and count the number of digits in the sum value.*/

#include <iostream>
using namespace std;
#include <sstream>
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        stringstream str1;
        str1 << x + y;
        cout <<"The number of digits in the sum value"<< str1.str().size() << endl;
    }
    return 0;
}