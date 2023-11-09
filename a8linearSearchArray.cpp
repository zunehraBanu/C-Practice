/*Linear Search
int integers[]={6, 7, 8, 9, 11} check if 11[given element] is presnt in the array or nor. If it is not present then return -1 else return the index */

#include <iostream>
using namespace std;
int main()
{
    // Initialize an array of integers.
    int integers[] = {6, 7, 8, 9, 11};

    // Calculate the size of the array.
    int size = sizeof(integers) / sizeof(integers[0]);

    // Define the key you want to find.
    int key = 11;

    // Initialize the answer to -1
    int answer = -1;

    // Iterate through the array to search for the key.
    for (int i = 0; i < size; i++)
    {
        // Check if the current element matches the key.
        if (integers[i] == 11)
        {
            // If a match is found, update the answer and exit the loop.
            answer = i;
            break; // we are using break because when we will get our answer then we will not proceed in the array[After getting our answer we dont need to travel through  entire array.]`
        }
    }
    // Print the index where the key was found (or -1 if not found).
    cout << answer << endl;
    return 0;
}