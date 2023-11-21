#include <iostream>
using namespace std;

/*Functions can return no values(void) or return one value.
what happens if you would like the function to return more than one value.
you can't BUT, you can your variables differently[pass by reference].*/

// Function prototype for calculating area
double calculateArea(double len, double wid); //[Function prototype and Function header are the same the difference is there is semicolon at the end in Function prototype]
void printresult(double length, double width, double area);
int main()
{
    double length, width;
    double area;

    // Prompt user to type a negative number to exit
    cout << "Type a negative to exit\n";

    // Get initial length input
    cout << "Enter length: ";
    cin >> length;

    // Continue loop until a negative length is entered
    while (length >= 0)
    {
        // Get width input
        cout << "Enter width: ";
        cin >> width;

        // Calculate area using the function
        area = calculateArea(length, width);

        printresult(length, width, area);

        // Prompt user for next length input
        cout << "Enter length: ";
        cin >> length;
    }

    return 0;
}

// Function to calculate the area of a rectangle
double calculateArea(double len, double wid) // Function header
{
    // Calculate and return the area
    double area = len * wid;
    return area;
}
void printresult(double length, double width, double area)
{
    // Display result
    cout << "A " << length << " by " << width << " rectangle has an area of " << area;
    cout << endl
         << endl;
}