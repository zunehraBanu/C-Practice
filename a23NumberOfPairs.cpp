// Find the total number of pairs in the array whose sum is equal to the given value x.
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
        int elemement;
        cin >> elemement;
        numbers.push_back(elemement);
    }
    int x;
    cout << "Enter X: " << endl;
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (numbers[j] + numbers[i] == x)
            {
                count = count + 1;
            }
        }
    }

    cout << "The total number of pairs in the array whose sum is equal to the given value x: " << count;
    return 0;
}