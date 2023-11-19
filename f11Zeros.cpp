/*Copy the main given below and run it (it should look familiar :-) )

You will be removing the code in main and replacing it with functions. You will be writing 2 functions. I would suggest you do one at a time, replace it in main, and make sure it works (get some points) before moving on the the next function.

enterValidNumber - this funtion has no formal parameters. It returns a number between 1 and 50, inclusively
returnZeros - this function has one formal parameter (the number of zeros to return. It returns a string of zeros (remember, you can add strings together, for example ans = "0" + "0"; means ans would equal "00" (You might have to add a string variable in main. After the function is called, main should print the string being returned out to the screen) Don't forget to include string
main to Copy

#include<iostream>
using namespace std;

int main()
{
    char resp;
    int num;

    do
    {
// The following 8 lines will be replaced with a method call
        cout << "Enter a number between 1 and 50: ";
        cin >> num;
        while (num < 1 || num > 50)
        {
            cout << "Invalid number - try again!!!\n";
            cout << "Enter a number between 1 and 50: ";
            cin >> num;
        }

        cout << num << " zeros: ";
// The  following loop will be replaced with a function call
        for (int i = 0; i < num; ++i)
            cout << "0";

        cout << "\n\nDo you want to do it again (y/n): ";
        cin >> resp;
    } while (resp == 'Y' || resp == 'y');
    cout << endl;

}*/
#include <iostream>
#include <string>
using namespace std;

int enterValidNumber()
{
    int num;
    cout << "Enter a number between 1 and 50: ";
    cin >> num;
    while (num < 1 || num > 50)
    {
        cout << "Invalid number - try again!!!\n";
        cout << "Enter a number between 1 and 50: ";
        cin >> num;
    }
    return num;
}

string returnZeros(int numZeros)
{
    string zeros = "";
    for (int i = 0; i < numZeros; ++i)
        zeros += "0";
    return zeros;
}

int main()
{
    char resp;

    do
    {
        int num = enterValidNumber();
        cout << num << " zeros: " << returnZeros(num) << "\n\n";
        cout << "Do you want to do it again (y/n): ";
        cin >> resp;
    } while (resp == 'Y' || resp == 'y');

    cout << endl;
}
