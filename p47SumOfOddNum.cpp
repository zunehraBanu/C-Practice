/*47. Write a C++ program to calculate the sum of all even and odd numbers in an array.
Sample Output:
Original array: 1 2 3 4 5 6 7 8
Sum of all even and odd numbers: 20,16*/

#include <iostream>
using namespace std;
int main()
{
    int even = 0;
    int odd = 0;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even = even + numbers[i];
        }
        else
        {
            odd = odd + numbers[i];
        }
    }
    cout << "Sum of all even and odd numbers: " << even << "," << odd;

    return 0;
}