/*33. Write a program in C++ to divide two numbers and print them on the screen.
Sample Output:
Divide two numbers and print:
----------------------------------
The quotient of 30 and 10 is : 3*/
#include <iostream>
using namespace std;
int main(){
    int num1,num2,quotient;
    cout<<"Enter dividend : ";
    cin>>num1;
    cout<<"Enter divisor : ";
    cin>>num2;
    quotient=num1/num2;
    cout<<"The quotient of " <<num1<<" and "<<num2<<" is : "<<quotient;
    return 0;
}