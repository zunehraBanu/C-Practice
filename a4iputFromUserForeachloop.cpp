//Input from user using for each loop and output uutput for loop
#include <iostream>
using namespace std;
int main()
{
    char vowels[5];
    cout << "Enter vowels: " << endl;

    // Using a range-based for loop to read characters into the array
    for (char &element : vowels)
    {
        cin >> element;
    }

    // Using a traditional for loop to print the elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i] << " ";
    }
}