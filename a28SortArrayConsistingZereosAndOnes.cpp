// Function to sort an array consisting of only 0s and 1s.
#include <iostream>
#include <vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &originalarray)
{
    // Count the number of zeroes in the original array
    int zeroes_count = 0;
    for (int element : originalarray)
    {
        if (element == 0)
        {
            zeroes_count++;
        }
    }
    // Modify the original array to place 0s before 1s
    for (int i = 0; i < originalarray.size(); i++)
    {
        if (i < zeroes_count)
        {
            originalarray[i] = 0;
        }
        else
        {
            originalarray[i] = 1;
        }
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
    cout << "Enter zeroes and ones of array: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        originalarray.push_back(element);
    }

    // Call the function to sort the array
    sortZeroesAndOnes(originalarray);
    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << originalarray[i] << " ";
    }
    cout << endl;
    return 0;
}