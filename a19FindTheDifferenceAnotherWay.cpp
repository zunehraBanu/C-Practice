// C++ program to find the difference between the sum of elements at even indicesto the sum of elementsat odd indices
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int difference = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            difference += arr[i];
        }
        else
        {
            difference -= arr[i];
        }
    }
    cout << "Difference between the sum of elements at even indices to the sum of elements at odd indices is: " << difference;

    return 0;
}