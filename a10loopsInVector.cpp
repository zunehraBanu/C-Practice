#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> integer;
    // for loop

    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        integer.push_back(element);
    }
    for (int i = 0; i < integer.size(); i++)
    {
        cout << integer[i] << " ";
    }
    cout << endl;
    // for each loop
    for (int element : integer)
    {
        cout << element << " ";
    }
    cout << endl;
    // while loop
    int idx = 0;
    while (idx < integer.size())
    {
        cout << integer[idx] << " ";
        idx++;
    }

    return 0;
}