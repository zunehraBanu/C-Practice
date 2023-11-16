// Given an integer array 'a' sorted in non-decreasing
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void sortedSquaredArray(vector<int> &originalarray)
{
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = originalarray.size() - 1;
    while (left_ptr <= right_ptr)
    {
        if (abs(originalarray[left_ptr]) < abs(originalarray[right_ptr]))
        {
            ans.push_back(originalarray[right_ptr] * originalarray[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(originalarray[left_ptr] * originalarray[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(), ans.end());
    // Output the sorted array
    cout << "Sorted array is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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
    sortedSquaredArray(originalarray);

    return 0;
}