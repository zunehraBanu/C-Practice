// Pass by reference example

/*Pass by reference does not pass the value into the function - it passess the address of the memory location. This means when the function does anything to doemal parameter it is aslo affecting the argument - since they both reference the same location.*/
#include <iostream>
using namespace std;

// Function prototypes
void getInput(double &l, double &w);
double calculateArea(double x, double y);
void printResults(double length, double width, double area);

int main()
{
    double length, width, area;

    // Prompt user to type a negative length to exit
    cout << "Type a negative length to exit\n";

    // Get initial input for length and width
    getInput(length, width);

    // Continue loop until a negative length is entered
    while (length >= 0)
    {
        // area function call
        area = calculateArea(length, width);

        // printresults function call
        printResults(length, width, area);

        // Get input for the next iteration
        getInput(length, width);
    }

    return 0;
}

// Function to calculate the area of a rectangle
double calculateArea(double x, double y)
{
    double ans = x * y;
    return ans;
}

// Function to print the results
void printResults(double length, double width, double area)
{
    cout << "A " << length << " by " << width << " rectangle has an area of " << area;
    cout << endl
         << endl;
}

// Function to get input from the user, using pass by reference
void getInput(double &l, double &w)
{
    cout << "Enter length: ";
    cin >> l;

    // Check if the length is non-negative
    if (l >= 0)
    {
        // If valid, prompt user for width
        cout << "Enter width: ";
        cin >> w;

        // Validate width (repeat until a non-negative width is entered)
        while (w < 0)
        {
            cout << "Invalid - try again\n";
            cout << "Enter width: ";
            cin >> w;
        }
    }
}