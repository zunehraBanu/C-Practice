/*54. Write a C++ program to enter P, T, R and calculate Simple Interest.
Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000*/

#include <iostream>
using namespace std;
int main()
{
    double principle, rate, time, simpleInterest;
    cout << "Calculate the Simple Interest :" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Input the Principle: ";
    cin >> principle;
    cout << "Input the Rate of Interest: ";
    cin >> rate;
    cout << "Input the Time: ";
    cin >> time;
    simpleInterest = principle * rate * time / 100.0;
    cout << "The Simple interest for the amount " << principle << " for " << time << " years " << rate << " % is: " << simpleInterest;
    return 0;
}