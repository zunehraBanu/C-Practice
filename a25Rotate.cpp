// Rotate the given array 'a' by k steps, where k is non negative . Note: k can be greater than n as well where n is the size of array 'a'.
#include <iostream>
using namespace std;
int main()
{ // Initialize an array with values
    int array[] = {1, 2, 3, 4, 5};

    // Size of the array
    int n = 5;

    // Number of positions to rotate the array to the right
    int k = 2;

    // Ensure k is within the range of array size
    // (k can be greater than n, so take the remainder)
    k = k % n; //This line ensures that k is within the range of the array size by taking the remainder when divided by n. This step is important because rotating by more positions than the array size is equivalent to rotating by the remainder.

    // Create an array to store the rotated elements
    int ansarray[5];
    int j = 0; // Index for ansarray

    // Insert the last k elements in ansarray
    // (n - k elements, here n is 5 [size of array] and k is 2,
    // so 5 - 2 = 3; at the 3rd index, 4 is present, so from there to the end of the array.)
    for (int i = n - k; i < n; i++)
    {
        ansarray[j++] = array[i];
    } // This loop inserts the last k elements of the original array into ansarray, starting from the index n - k.

    // Insert the first n - k elements in ansarray
    for (int i = 0; i <= k; i++)
    {
        ansarray[j++] = array[i];
    } // This loop inserts the remaining elements (the first n - k elements) of the original array into ansarray.

    // Output the rotated array
    cout << "After rotate: ";
    for (int i = 0; i < 5; i++)
    {
        cout << ansarray[i] << " ";
    }
    cout << endl;
    return 0;
}