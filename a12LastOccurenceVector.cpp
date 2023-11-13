// Find the last occurence of an element x in a given vector
// x=5
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    cout << "Enter 10 numbers: " << endl;
    vector<int> numbers;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        int element;
        cin >> element;
        numbers.push_back(element);
    }
    int x;
    cout << "Enter x: " << endl;
    cin >> x;
    int occurence = -1;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == x)
        {
            cout << x << " is present at index " << i << endl;
            occurence = i;
        }
    }
    cout << endl
         << x << " last ocuurence is present at index " << occurence;
    return 0;
}
