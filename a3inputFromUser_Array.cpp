//Input from user using for loop

#include <iostream>
using namespace std;
int main()
{
    // Declare an array to store vowels
    char vowels[5];

    // prompt the user to enter vowels
    cout << "Enter vowels: " << endl;

    // input vowels from user using a for loop
    for (int i = 0; i < 5; i++)
    {
        cin >> vowels[i];
    }

    // Display the entered vowels using another for loop
    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i] << " ";
    }

    // Return 0 to indicate successful execution
    return 0;
}