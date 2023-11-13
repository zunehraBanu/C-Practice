// Check if Array is sorted
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sorted = false;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[i - 1])
        {
            sorted = true;
        }
    }
    cout << "Array is " << sorted << " [1 means true and 0 means false]";
    return 0;
}
