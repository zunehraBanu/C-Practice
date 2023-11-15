// Function to sort an array consisting of only 0s and 1s.
#include <iostream>
#include <vector>
using namespace std;

// Function to sort an array consisting of only 0s and 1s
void sortZeroesAndOnes(vector<int> &originalarray)
{
    // Initialize two pointers, left_Ptr and right_ptr, pointing to the beginning and end of the array
    int left_Ptr = 0;
    int right_ptr = originalarray.size() - 1;

    // Continue until the pointers meet in the center
    while (left_Ptr < right_ptr)
    {
        // Swap 0 and 1 if they are in the wrong positions
        if ((originalarray[left_Ptr] == 1) && (originalarray[right_ptr] == 0))
        {
            originalarray[left_Ptr++] = 0;
            originalarray[right_ptr--] = 1;
        }

        // Move left pointer to the right if it's pointing to 0
        if (originalarray[left_Ptr] == 0)
        {
            left_Ptr++;
        }

        // Move right pointer to the left if it's pointing to 1
        if (originalarray[right_ptr] == 1)
        {
            right_ptr--;
        }
    }
    // Return from the function after sorting is complete
    return;
}
int main()
{
    // Input size of the array
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    // Input array elements (0s and 1s)
    vector<int> originalarray;
    cout << "Enter zeroes and ones of array: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        originalarray.push_back(element);
    }

    // Call the sorting function
    sortZeroesAndOnes(originalarray);

    // Output the sorted array
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << originalarray[i] << " ";
    }

    return 0;
}