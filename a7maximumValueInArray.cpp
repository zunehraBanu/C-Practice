//Find the maximum value out of all the elements in the array.

#include <iostream>
using namespace std;
int main()
{
    // Initialize an array of integers.
    int integers[] = {4, 2, 6, 7};

    // Initialize maxvalue with the first element of the array.
    int maxvalue = integers[0]; // we can initialize it to zero as well but what if the numbers are negative then max value will be 0 then.so better to use integers[0]

    // Calculate the size of the array.
    int size = sizeof(integers) / sizeof(integers[0]);

    // Iterate through the array to find the maximum value.
    for (int i = 0; i < size; i++)
    {
        // Check if the current element is greater than or equal to the current maxvalue.
        if (integers[i] >= maxvalue)
        {

            // If the current element is greater, update maxvalue.
            maxvalue = integers[i];
        }
    }

    // Print the maximum value found in the array.
    cout << "Max value is: " << maxvalue;
    return 0;
}