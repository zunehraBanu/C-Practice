/* 11. Write a C++ program to print the results of the specified operations.
Sample Output:
Print the result of some specific operation :
--------------------------------------------------
Result of 1st expression is : 23
Result of 2nd expression is : 5
Result of 3rd expression is : 12
Result of 4th expression is : 3*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Print the result of some specific operation :" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ;  //-1 + 24 = 23
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; //40 % 7 = 5 (remainder of 40/7)
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ;  //14 - (24/11)= 14 - 2 = 12
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n";  //2 + (15/6) - remainder of (7/2) = 2 + 2 - 1 = 4 - 1 = 3	
    return 0;
}