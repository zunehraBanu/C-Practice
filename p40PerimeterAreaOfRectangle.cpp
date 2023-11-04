/*40. Write a C++ program to print the area and perimeter of a rectangle.
Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2*/

#include <iostream>
using namespace std;
int main()
{
float area,perimeter,width,height=0;
    cout << "\n\n Print the area and perimeter of a rectangle:\n";
	cout << "----------------------------------------------\n";
	cout << " Input the width of the rectangle: ";
	cin>> width;
	cout << " Input the height of the rectangle: ";
	cin>> height;	
	perimeter=2 * (width+height);
	area= height * width;
	cout<<"The area of the rectangle is: "<<area<<"\n";
	cout<<"The perimeter of the rectangle is: "<<perimeter<<"\n";
	
}