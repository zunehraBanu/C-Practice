/*55. Write a C++ program to enter P, T, R and calculate compound interest.
Sample Output:
Calculate the Compound Interest :
-------------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
10 % is: 23073.8*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double principal, rate, time, compoundInterest, totalAmount;
    cout << "Calculate the Compound Interest :" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Input the Principle: ";
    cin >> principal;
    cout << "Input the Rate of Interest: ";
    cin >> rate;
    cout << "Input the Time: ";
    cin >> time;
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);
    cout << "The Interest after compounded for the amount " << principal << " for " << time << " years @" << rate << " % is: " << compoundInterest << endl;
    totalAmount = principal + compoundInterest;
    cout << "The total amount after compounded for the amount " << principal << " for " << time << " years @ " << rate << " % is: " << totalAmount;
    return 0;
}