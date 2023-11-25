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
    string input, output;
    cout << "Enter input: ";
    getline(cin, input);
    for (unsigned int i = 0; i < input.length(); i++)
    {
        if (isalpha(input.at(i)))
        {
            output = output + input.at(i);
        }
    }
    cout << "The alphabetic characters are: " << output << endl;
}