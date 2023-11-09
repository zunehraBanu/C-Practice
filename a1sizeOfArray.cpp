//Array operations example
#include <iostream>
using namespace std;
int main()
{
    // Declare and initialize an array of integers
    int integers[] = {1, 2, 3, 4};

    // output the size of the array
    cout << "Size of array is: " << sizeof(integers) << endl; // sizeof(name of your array)

    // output the length of the array
    cout << "Length of an array is: " << sizeof(integers) / sizeof(integers[0]) << endl; // sizeof(name of your array[any element index of your array])

    // Declare an array of integers without intialization
    int integers2[4];

    // output the eleemnts of the unitialized array
    cout << integers2[0] << endl;
    cout << integers2[1] << endl;
    cout << integers2[2] << endl;
    cout << integers2[3] << endl;

    // Return 0 to indicate successful execution
    return 0;
}