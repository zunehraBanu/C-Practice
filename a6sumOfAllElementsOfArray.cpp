//Calculate the sum of all elements in the given array

#include <iostream>
using namespace std;
int main()
{
    // Initialize an array of integers.
    int integers[] = {3, 4, 10, 11};

    // Initialize a variable to store the sum of the integers.
    int sum = 0;

    // Calculate the size of the array.
    int size = sizeof(integers) / sizeof(integers[0]);

    // Iterate through the array to calculate the sum of the integers.
    for (int i = 0; i < size; i++)
    {

        // Add the current element to the sum.
        sum = sum + integers[i];
    }
    // Print the sum of the integers in the array.
    cout << "Sum is: " << sum;
    return 0;
}