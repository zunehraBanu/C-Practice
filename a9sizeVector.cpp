#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> integer;
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;
    integer.push_back(1);
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;

    integer.push_back(2);
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;

    integer.push_back(3);
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;
    integer.resize(5);
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;

    integer.resize(10);
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;

    integer.pop_back();
    integer.pop_back();
    cout << "Size: " << integer.size() << endl;
    cout << "Capacity: " << integer.capacity() << endl;
    return 0;
}