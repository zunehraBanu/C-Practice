//7. Write a C++ program that displays mixed data types and arithmetic operations.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1 = 5;
    int num2 = 7;
    double num3 = 3.7;
    double num4 = 8.0;
    cout << "Display arithmetic operations with mixed data type : ";
    cout << "\n---------------------------------------------------------------------------------------\n";

    cout << fixed << setprecision(1);
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num3 << " + " << num4 << " = " << num3 + num4 << endl;
    cout << num1 << " + " << num4 << " = " << num1 + num4 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num3 << " - " << num4 << " = " << num3 - num4 << endl;
    cout << num1 << " - " << num4 << " = " << num1 - num4 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num3 << " * " << num4 << " = " << num3 * num4 << endl;
    cout << num1 << " * " << num4 << " = " << num1 * num4 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num3 << " / " << num4 << " = " << num3 / num4 << endl;
    cout << num1 << " / " << num4 << " = " << num1 / num4 << endl;
}