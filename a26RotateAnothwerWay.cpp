// Rotate the given array 'a' by k steps, where k is non negative . Note: k can be greater than n as well where n is the size of array 'a'.
#include <iostream>
#include <bits/stdc++.h>
//<bits/stdc++.h> includes standard C++ headers (including <algorithm> for the reverse function), and <vector> is for using vectors.
using namespace std;
#include <vector>
int main()
{
    // Create a vector to store the original array
    vector<int> originalarray;
    originalarray.push_back(1);
    originalarray.push_back(2);
    originalarray.push_back(3);
    originalarray.push_back(4);
    originalarray.push_back(5);

    // Number of steps to rotate the array to the right
    int k = 2;

    // Ensure k is within the range of the array size
    k = k % originalarray.size();

    // Output the original array before rotation
    cout << "Before rotating array is this: ";
    for (int i = 0; i < originalarray.size(); i++)
    {
        cout << originalarray[i] << " ";
    }
    cout << endl;

    // Perform the array rotation using the reverse function
    reverse(originalarray.begin(), originalarray.end());       // Reverse the entire array
    reverse(originalarray.begin(), originalarray.begin() + k); // Reverse the first 'k' elements
    reverse(originalarray.begin() + k, originalarray.end());   // Reverse the remaining elements

    /*The reverse function is used to perform the array rotation. First, the entire array is reversed. Then, the first 'k' elements are reversed, and finally, the remaining elements are reversed.*/

    // Output the array after rotation
    cout << "After rotating array is this: ";
    for (int i = 0; i < originalarray.size(); i++)
    {
        cout << originalarray[i] << " ";
    }
    return 0;
}