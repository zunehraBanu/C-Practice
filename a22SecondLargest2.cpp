// Find out second largest number in array
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 7, 3, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    cout << "Largest Number is: " << largest << endl;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > secondLargest && array[i] < largest)
        {
            secondLargest = array[i];
        }
    }
    cout << "Second Largest Number is: " << secondLargest << endl;
    return 0;
}