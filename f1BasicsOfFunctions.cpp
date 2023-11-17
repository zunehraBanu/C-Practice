#include <iostream>
using namespace std;
// In functions what data type is and how many parameters you are passing matters.
// Function to add two integers
int addIntegers(int, int); // prototype-If we want to define a function after the function call, we need to use the function prototype.
// Function to add three integers
int addIntegers(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}

// Function to add three float numbers
float addFloats(float num1, float num2, float num3)
{
    float sum = num1 + num2 + num3;
    return sum;
}
int main()
{
    int a, b, c;
    cout << "Add two integers: " << endl;
    cout << "Enter 2 integer that you would like to add: ";
    cin >> a;
    cin >> b;
    // Calling the function to add two integers
    int sum = addIntegers(a, b);
    // Displaying the result
    cout << a << " and " << b << " sum is: " << sum;
    cout << "\nAdd three integers: " << endl;
    cout << "Enter 3 integer that you would like to add: ";
    cin >> a;
    cin >> b;
    cin >> c;
    // Calling the function to add three integers
    int sum2 = addIntegers(a, b, c);
    // Displaying the result
    cout << a << ", " << b << " and " << c << " sum is: " << sum2;

    cout << "\nAdd three float numbers: " << endl;
    cout << "Enter 3 float numbers that you would like to add: ";
    float d, e, f;
    cin >> d;
    cin >> e;
    cin >> f;
    // Calling the function to add three float numbers
    float sum3 = addFloats(d, e, f);
    // Displaying the result
    cout << d << ", " << e << " and " << f << " sum is: " << sum3;
}
int addIntegers(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}