/*32. Write a program in C++ to check whether a number is positive, negative or zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/

#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Input a number : ";
  cin >> number;
  if (number > 0)
  {
    cout << "The entered number is positive.";
  }
  else if (number < 0)
    cout << "The entered number is negative.";
  else
    cout << "The number is zero.";
  return 0;
}