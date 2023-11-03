/*10. Write a C++ program to format the output.
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false*/

#include <iostream>
#include <iomanip> // Needed to do formatted I/O
using namespace std;
int main()
{
    /*
In C++, setw is a manipulator that is used in combination with the <iomanip> header to control the width of the output fields when displaying data using streams, such as std::cout for standard output.It allows you to set the minimum width for the output of the next value that is printed to the stream.
  You can use it in combination with other manipulators like std::left, std::right, and std::fixed to control the alignment and formatting of your output. For example, std::setw(5) sets the minimum width for the output to be 5 characters, which means that the number will be printed with leading spaces to make it at least 5 characters wide. If the number is shorter than 5 characters, it will be padded with spaces on the left to meet the specified width.*/

    /*
    In C++, setfill is a manipulator provided by the <iomanip> header that allows you to specify a character to fill in the empty space when using setw to set the width of the output field. It works in conjunction with setw to control the character used for padding when the actual output is shorter than the specified width. For example, std::setfill('0') sets the fill character to '0', which means that any padding needed to meet the minimum width specified by std::setw(5) will be filled with '0' characters. So, if the number is shorter than 5 characters, it will be padded with '0' characters on the left to meet the specified width.(if number is 42 then output will be 00042)*/
    /*
    In C++, "scientific" is a way to format floating-point numbers using scientific notation. It represents numbers with a coefficient and an exponent. For example, the number 123456.789 is displayed as "1.234568e+05" in scientific notation. You can set the scientific format using cout<<scientific from the <iomanip> header.*/

    cout << "Formatting the output : " << endl;
    cout << "----------------------------" << endl;
    double pi = 3.14159265;           // this is floating point number
    cout << fixed << setprecision(4); // number is set to display with 4 decimal places
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl; //// setw() sets the total width
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << setfill('-'); //// setfill() sets to fill the blanks with specified character
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << scientific; //// set value in scientific format with exponent
    cout << "The value of pi in scientific format is : " << pi << endl;
    bool done = false; //// this is boolean variable
    cout << "Status in number : " << done << endl;
    cout << boolalpha; //// set output in alphabet true or false
    cout << "Status in alphabet : " << done << endl;
    return 0;
}