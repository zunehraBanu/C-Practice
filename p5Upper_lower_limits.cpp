/*5. Write a in C++ program to check the upper and lower limits of integers.
Expected Output:
Check the upper and lower limits of integer :
--------------------------------------------------
The maximum limit of int data type : 2147483647
The minimum limit of int data type : -2147483648
The maximum limit of unsigned int data type : 4294967295
The maximum limit of long long data type : 9223372036854775807
The minimum limit of long long data type : -9223372036854775808
The maximum limit of unsigned long long data type : 18446744073709551615
The Bits contain in char data type : 8
The maximum limit of char data type : 127
The minimum limit of char data type : -128
The maximum limit of signed char data type : 127
The minimum limit of signed char data type : -128
The maximum limit of unsigned char data type : 255
The minimum limit of short data type : -32768
The maximum limit of short data type : 32767
The maximum limit of unsigned short data type : 65535*/

#include <iostream>
#include <climits> //we need to include climits library to get min and max values
#include <limits>  //we need to include this library for another program
using namespace std;
int main()
{
    cout << "The maximum limit of int data type : " << INT_MAX << endl;
    cout << "The minimum limit of int data type : " << INT_MIN << endl;
    cout << "The maximum limit of unsigned int data type : " << UINT_MAX << endl;
    cout << "The maximum limit of long long data type : " << LLONG_MAX << endl;
    cout << "The minimum limit of long long data type : " << LLONG_MIN << endl;
    cout << "The maximum limit of unsigned long long data type : " << ULLONG_MAX << endl;
    cout << "The Bits contain in char data type : " << __CHAR_BIT__ << endl;
    cout << "The maximum limit of char data type : " << CHAR_MAX << endl;
    cout << "The minimum limit of char data type : " << CHAR_MIN << endl;
    cout << "The maximum limit of signed char data type : " << SCHAR_MAX << endl;
    cout << "The minimum limit of signed char data type : " << SCHAR_MIN << endl;
    cout << "The maximum limit of unsigned char data type : " << UCHAR_MAX << endl;
    cout << "The minimum limit of short data type : " << SHRT_MIN << endl;
    cout << "The maximum limit of short data type : " << SHRT_MAX << endl;
    cout << "The maximum limit of unsigned short data type : " << USHRT_MAX << endl;

    cout << "------------------------------------------------------------------------------------------------------" << endl;

    // Another way of doing this program is present below

    cout << "The maximum limit of int data type : " << numeric_limits<int>::max() << endl;
    /*
    The expression std::numeric_limits<int>::min() is used to retrieve the minimum value that can be represented by the int data type.
    Let me break down this code :  std::numeric_limits: This is a C++ template class provided by the <limits> header.
    It is used to access information about the characteristics of different data types, such as their minimum and maximum representable values.
    <int>: Inside the angle brackets, you specify the data type for which you want to obtain information.
    In this case, int is used, indicating that you want information about the int data type.
    ::min(): This part of the expression accesses the min() member function of the std::numeric_limits<int> class.
    This function returns the minimum representable value for the specified data type.
    So, when you use std::numeric_limits<int>::min(), it retrieves and returns the minimum value that an int data type can represent.
    The same pattern is used to obtain the maximum value with std::numeric_limits<int>::max().
    You can use these functions for various data types to determine their limits.*/

    /*The :: operator in C++ is called the scope resolution operator.
    It is used to access members (variables, functions, or types) of a class or namespace.
    In the context of std::numeric_limits<int>::min(), here's how the :: operator is used:
    std::numeric_limits<int> refers to the std::numeric_limits class specialized for the int data type.
    This class contains information about the characteristics of the int data type.
    min() is a member function of the std::numeric_limits class that retrieves the minimum value that can be represented by the specified data type.
    It's accessed using the :: operator.  So, the :: operator is used to access a member (in this case,
    the min function) within a class (in this case, the std::numeric_limits<int> class) and retrieve its value.
    It's a way to qualify the member's scope and specify from which class or namespace it should be accessed.
    */

    cout << "The minimum limit of int data type : " << numeric_limits<int>::min() << endl;
    cout << "The maximum limit of unsigned int data type : " << numeric_limits<unsigned int>::max() << endl;
    cout << "The maximum limit of long long data type : " << numeric_limits<long long>::max() << endl;
    cout << "The minimum limit of long long data type : " << numeric_limits<long long>::min() << endl;
    cout << "The maximum limit of unsigned long long data type : " << numeric_limits<unsigned long long>::max() << endl;
    cout << "The Bits contain in char data type : " << CHAR_BIT << endl;
    cout << "The maximum limit of char data type : " << static_cast<int>(numeric_limits<char>::max()) << endl;

    /*The static_cast<int> is used to convert the result of std::numeric_limits<char>::max() and std::numeric_limits<char>::min() from the char
    data type to int. This conversion is performed to ensure that the values are printed as integers when using std::cout.
     std::numeric_limits<char>::max() and std::numeric_limits<char>::min() return values of type char, which is an integral type, but when you use
     them with std::cout, it's better to ensure they are interpreted as integers to ensure they are displayed correctly in the output.
     By using static_cast<int>, you explicitly tell the C++ compiler to treat the result as an int.
     This ensures that the values are displayed as integers in the output when printing with std::cout.
     It's a way to prevent any potential issues or unexpected output formatting when printing values of smaller integral types.*/

    cout << "The minimum limit of char data type : " << static_cast<int>(numeric_limits<char>::min()) << endl;
    cout << "The maximum limit of signed char data type : " << static_cast<int>(numeric_limits<signed char>::max()) << endl;
    cout << "The minimum limit of signed char data type : " << static_cast<int>(numeric_limits<signed char>::min()) << endl;
    cout << "The maximum limit of unsigned char data type : " << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;
    cout << "The minimum limit of short data type : " << numeric_limits<short>::min() << endl;
    cout << "The maximum limit of short data type : " << numeric_limits<short>::max() << endl;
    cout << "The maximum limit of unsigned short data type : " << numeric_limits<unsigned short>::max() << endl;
    
    return 0;
}
