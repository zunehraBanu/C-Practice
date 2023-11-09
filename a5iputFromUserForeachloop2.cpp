//Input from user using for each loop and output aswell using for each loop

#include <iostream>
using namespace std;
int main()
{
    // Declare an array to store 5 characters.
    char vowels[5];

    // Prompt the user to input 5 characters
    for (char &element : vowels)
    {
        cin >> element;
    }

    // Display the characters in the 'vowels' array.
    for (char element : vowels)
    {
        cout << element << " ";
    }
    return 0;
}