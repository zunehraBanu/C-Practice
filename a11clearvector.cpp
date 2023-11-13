//arrays
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    cout << "Enter 5 numbers: " << endl;
    vector<int> numbers;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        numbers.push_back(element);
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    numbers.insert(numbers.begin() + 2, 6);
    for (int element : numbers)
    {
        cout << element << " ";
    }
    cout << endl;
    numbers.erase(numbers.end() - 2);
    int index = 0;
    while (index < numbers.size())
    {
        cout << numbers[index++] << " ";
    }

    return 0;
}