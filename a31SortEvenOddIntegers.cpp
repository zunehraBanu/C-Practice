// given an array of integers 'a', move all the even integers at the begining of the array followed by all odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.
#include <iostream>
using namespace std;
#include <vector>
void sortZeroesAndOnes(vector<int> &originalarray)
{
    int left_ptr = 0;
    int right_ptr = originalarray.size() - 1;
    while (left_ptr < right_ptr)
    {
        if ((originalarray[left_ptr] % 2 != 0) && originalarray[right_ptr] % 2 == 0)
        {
            swap(originalarray[left_ptr], originalarray[right_ptr]);
        }
        if (originalarray[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }

        // Move right pointer to the left if it's pointing to 1
        if (originalarray[right_ptr] % 2 == 1)
        {
            right_ptr--;
        }
    }
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
    cout << "Enter Even and odd elements of array: ";
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