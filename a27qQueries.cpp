// Given Q queries, check if the given number is present in the array or not. Note: value of all the elements in the array is less than 10 to the power of 5.

/*this program takes an array as input, calculates the frequency of each element, and then answers queries about the frequency of specific elements in the array.*/
#include <iostream>
#include <vector>
/*including <vector> is necessary to use vectors in your C++ program and take advantage of the dynamic array capabilities and functionality provided by the Standard Template Library.*/
using namespace std;
int main()
{
    // Input the size of the array
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    // Create a vector to store the elements of the array
    vector<int> array;
    // Input the elements of the array using a loop
    cout << "Enter " << size << " elements of array: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        array.push_back(element); // Use push_back to add elements to the vector
    }
    // Define a constant for the maximum possible value in the array
    const int N = 1e5 + 10;
    /*A constant N is defined as 100010 (10 to the power of 5 plus 10). A vector freq is created with size N and initialized with zeros. This
    vector will be used to store the frequency of each element in the array.*/
    // Create a frequency vector to store the frequency of each element in the array
    vector<int> freq(N, 0);

    /*Below: A loop iterates through each element of the array and increments the corresponding frequency in the freq vector.*/
    // Calculate the frequency of each element in the array
    for (int i = 0; i < size; i++)
    {
        freq[array[i]]++;
    }

    // Input the number of queries
    cout << "Enter number of queries: ";
    int queries;
    cin >> queries;

    /*Using a while loop, each query is processed. The user inputs a query element, and the program outputs the frequency of that element in the array based on the precomputed frequencies stored in the freq vector.*/
    // Process each query
    while (queries--)
    {
        // Input the query element
        int queryelement;
        cout << "Enter query element: ";
        cin >> queryelement;

        // Output the frequency of the query element in the array
        cout << queryelement << " is present " << freq[queryelement] << " times in array." << endl;
    }

    return 0; // This indicates that the program executed successfully and returns 0 to the operating system.
}