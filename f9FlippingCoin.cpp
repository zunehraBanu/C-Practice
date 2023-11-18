/*Write a program that simulates flipping a coin and counts how many times it was heads and how many times it was tails. The program will ask the user for the seed value (THIS IS DONE FOR YOU, this would be taken out, but is needed for testing) and also it will ask the user how many times they want to flip a coin. It then prints how many heads and how many tails there were. Your program should have the following function:

headsOrTails - when this function is called, it returns "heads" or "tails" (you will need to use a random number)

Define the function below main and put the prototype before main

Sample Output

Enter the seed value: 3
How many times do you want to flip a coin: 4

After flipping a coin 4 times there were:
Heads: 3
Tails: 1*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototype for the coin flip function
string headsOrTails();

int main()
{
    // Variables to store user input, heads and tails count
    int seed;
    int numFlips;
    int headsCount = 0;
    int tailsCount = 0;

    // Prompt user for the seed value
    cout << "Enter the seed value: ";
    cin >> seed;

    // Seed the random number generator
    srand(seed);

    // Prompt user for the number of coin flips
    cout << "How many times do you want to flip a coin: ";
    cin >> numFlips;

    // Perform the coin flips
    for (int i = 0; i < numFlips; i++)
    {
        // Get the result of a single coin flip
        string result = headsOrTails();

        // Update counts based on the result
        if (result == "heads")
        {
            headsCount++;
        }
        else
        {
            tailsCount++;
        }
    }

    // Display the results after all coin flips
    cout << "\nAfter flipping a coin " << numFlips << " times there were:" << endl;
    cout << "Heads: " << headsCount << endl;
    cout << "Tails: " << tailsCount << endl;

    return 0;
}

// Function to simulate a coin flip and return the result
string headsOrTails()
{
    // Generate a random value (0 or 1) to represent heads or tails
    int randomValue = rand() % 2;

    // Return "heads" if randomValue is 0, otherwise return "tails"
    if (randomValue == 0)
    {
        return "heads";
    }
    else
    {
        return "tails";
    }
}
