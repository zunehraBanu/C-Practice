/*13.5 Fall 2023 Menu of Shapes Find Area
Write a program to produce the following output. Participation 2.7.5 will show how to use the pi constant - make sure you include cmath to use it. Use a SWITCH STATEMENT.

Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: 2
Enter the length: 12.5
Enter the width: 4.2
The area of the rectangle is: 52.50
Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: 8
Invalid! Try Again!!!
Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: 1
Enter the radius: 7.5
The area of the circle is: 176.71
Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: 3
Enter the base: 10
Enter the height: 8.4
The area of the right triangle is: 42.00
Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: -2
Invalid! Try Again!!!
Choose the shape to find area of:
        1. Circle
        2. Rectangle
        3. Right Triangle
        4. Exit
Selection: 4*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    while (true)
    {
        cout << "Choose the shape to find area of:" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Right Triangle" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double radius;
            cout << "Enter the radius: ";
            cin >> radius;
            double area = 3.14159265359 * radius * radius;
            cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
            break;
        }
        case 2:
        {
            double length, width;
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            double area = length * width;
            cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
            break;
        }
        case 3:
        {
            double base, height;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "The area of the right triangle is: " << fixed << setprecision(2) << area << endl;
            break;
        }
        case 4:
        {
            cout << endl;
            return 0;
        default:
            cout << "Invalid! Try Again!!!" << endl;
            break;
        }
        }
    }
    return 0;
}