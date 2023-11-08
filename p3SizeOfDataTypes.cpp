/*3. Write a in C++ program to find the size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes */

#include <iostream>  /*#include <iostream>: This line includes the C++ Standard Library's iostream header, which provides input and output functionality.*/
#include <typeinfo>  //For typeid. Another approach code library. /*#include <typeinfo>: This line includes the typeid functionality from the C++ Standard Library. It allows us to obtain the name of a data type.
using namespace std; /*using namespace std;: This line simplifies code by allowing us to use objects and functions from the std namespace without explicitly specifying it, making the code more concise.*/
int main()
{
    // Output the title and separator
    cout << "Find Size of fundamental data types :" << endl;
    cout << "------------------------------------------";

    // Output the size of each fundamental data type
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes" << endl;
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes" << endl;
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes" << endl;
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes" << endl;
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes" << endl;
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes" << endl;
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes" << endl;
    cout << "The sizeof(long double) is : " << sizeof(long double) << " bytes" << endl;
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes" << endl;
    // cout << "------------------------------------------" << endl;
    // cout << "Anther way of doing this: " << endl;
    // const char *typeNames[] = {"char", "short", "int", "long", "long long", "float", "double", "long double", "bool"};
    /*const char* typeNames[] = {...}: This line defines an array named typeNames that stores the names of the fundamental data types as C-style strings. const: This keyword indicates that the elements of the array cannot be modified once they are initialized. In other words, it makes the elements read-only.

 char*: This specifies the data type of the elements in the array. In this case, each element in the typeNames array is a pointer to a character (i.e., a C-style string).

 typeNames[]: This declares an array named typeNames. The empty brackets [] indicate that this is an array, and its size is determined by the number of elements provided during initialization.

 So, const char* typeNames[] defines an array of pointers to constant character strings (C-style strings). The elements in this array are meant to store the names of fundamental data types, which are represented as strings (e.g., "char," "int," "float"). The const qualifier ensures that these strings cannot be modified once they are assigned.*/
    // cout << "Find Size of fundamental data types :" << endl;
    // cout << "------------------------------------------"<<endl;
    //  for (const char* typeName : typeNames) {
    //     cout << "The sizeof(" << typeName << ") is: " << sizeof(typeid(typeName).name()) << " bytes" << endl;
    // }
    /*for (const char* typeName : typeNames) { ... }: This for loop iterates through each element in the typeNames array.

cout << "The sizeof(" << typeName << ") is: " << sizeof(typeid(typeName).name()) << " bytes" << endl;: Inside the loop, this line constructs and prints a message for each data type. Here's how it works:

<< "The sizeof(" << typeName << ") is: ": This part of the output message prints the type name.
<< sizeof(typeid(typeName).name()) << " bytes": This part calculates and prints the size of the data type using sizeof, and the typeid(typeName).name() part retrieves the name of the data type as a string using the typeid operator.*/
    return 0;
}