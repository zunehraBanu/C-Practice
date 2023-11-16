// Given an integer array 'a', return the prefix sum/running sum in the same array without creating a new array.
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// Function to calculate the running sum in the original array
void runningSum(vector<int> &originalarray)
{
    // Start the loop from the second element since the first element remains unchanged
    for (int i = 1; i < originalarray.size(); i++)
    {
        // Calculate the running sum and update the current element in the array
        originalarray[i] = originalarray[i - 1] + originalarray[i];
    }
}
int main()
{

    // Input size of the array
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    // Input array elements (0s and 1s)
    vector<int> originalarray;
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        originalarray.push_back(element);
    }
    // Call the runningSum function
    runningSum(originalarray);

    // Output the modified array with running sum
    for (int i = 0; i < originalarray.size(); i++)
    {
        cout << originalarray[i] << " ";
    }

    return 0;
}