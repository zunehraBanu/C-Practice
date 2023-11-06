/*70. Write a C++ program to replace all the lower-case letters in a given string with the corresponding capital letters.*/

#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name : ";
    cin >> name;
    for (int i = 0; i < name.size(); i++)
    {
        name[i] = toupper(name[i]);
    }

    cout << "Hi, " << name << endl;
    return 0;
}
// Below is another way of doing program
/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    transform(text.begin(),text.end(), text.begin(), ::toupper);
    cout << text << endl;
    return 0;
}*/