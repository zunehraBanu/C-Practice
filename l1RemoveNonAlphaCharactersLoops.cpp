/*13.1 Remove all non alpha characters
Write a program that removes all non alpha characters from the given input. You should use getline to read the input.
Hint: You are not changing the string they type in, maybe declare another string, and concatenate the letters on?
Use a getline to input the string

Sample Output

Enter input: -Hello, 1 world$!
The alphabetic characters are: Helloworld*/
#include <iostream>
using namespace std;
int main()
{
    // Declare two strings, one for input and one for output
    string input, output;
    // Prompt the user to enter input
    cout << "Enter input: ";
    // Use getline to read the input line
    getline(cin, input);
    // Iterate through each character in the input string
    for (unsigned int i = 0; i < input.length(); i++)
    {
        // Check if the current character is an alphabetical character
        if (isalpha(input.at(i)))
        {
            // If it is, concatenate it to the output string
            output = output + input.at(i);
        }
    }
    // Display the result, showing only the alphabetic characters
    cout << "The alphabetic characters are: " << output << endl;
}