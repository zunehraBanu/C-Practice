// Function to sort an array consisting of only 0s and 1s.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Get the size of the array from the user
    int size;
    cout << "Enter size of array: ";
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
    // Move all 1s to the end
    for (int i = 0; i < size; i++)
    {
        // If the element is 1, push it to the end and erase from the current position
        if (originalarray[i] == 1)
        {
            originalarray.push_back(1);
            originalarray.erase(originalarray.begin() + i);
            /*originalarray.begin(): This returns an iterator pointing to the beginning of the vector.
originalarray.begin() + i: It moves the iterator i positions forward from the beginning. This effectively points to the element at position i in the vector.
originalarray.erase(originalarray.begin() + i): This erases the element at the position specified by the iterator. In your code, it removes the element at index i in the vector.*/
        } /*This part is designed to sort the array by moving all the 1s to the end. It iterates through each element of the vector. If the element is 1, it appends a 1 to the end of the vector and removes the current 1 from its original position.*/
    }
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << originalarray[i] << " ";
    }

    return 0;
}