//Find out second largest number in array
#include <iostream>
#include <limits.h>
using namespace std;
int largestElementIndex(int array[], int size)
    {
        int largest = INT_MIN;
        int maxindex=-1;
        for (int i = 0; i < size; i++)
        {
            if (array[i] > largest)
            {
                largest = array[i];
                maxindex=i;
            }
        }
        return maxindex;
    }

int main()
{
    int array[] = {1, 2, 3, 4, 7, 3, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int indexoflargest=largestElementIndex(array, size);
    cout << "Largest Number is: "<<array[indexoflargest]<<endl;
    array[indexoflargest]=-1;
    int indexofsecondlargest=largestElementIndex(array, size);
    cout << "Second Largest Number is: " <<array[indexofsecondlargest]<<endl;
    return 0;
}