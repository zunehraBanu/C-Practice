/*60. Write a C++ program to add two binary numbers.
Sample Output:
Addition of two binary numbers:
-----------------------------------
Input the 1st binary number: 1010
Input the 2nd binary number: 0011
The sum of two binary numbers is: 1101*/

#include <iostream>
using namespace std;
/*int main()
{
    long binaryNumber1,binaryNumber2;
    int sum=0;
    cout<<"Addition of two binary numbers:"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Input the 1st binary number: ";
    cin>>binaryNumber1;
    cout<<"Input the 2nd binary number: ";
    cin>>binaryNumber2;
    binaryNumber1=int(binaryNumber1);
    cout<<binaryNumber1;
    cout<<"The sum of two binary numbers is: "<<sum;

    return 0;
}*/
int main()
{
    long bn1, bn2;    /*long bn1, bn2;: This declares two long integer variables bn1 and bn2 to store the two binary numbers. The long data type is used to accommodate longer binary numbers.*/
    int i = 0, r = 0; /*int i = 0, r = 0;: These variables i and r are initialized to 0. i will be used as an index to store binary digits in the sum array, and r will be used to hold the carry during addition.*/
    int sum[20];      /*int sum[20];: This declares an integer array sum of size 20 to store the binary digits of the sum. This array is used to store the result of the addition.*/
    cout << "\n\n Addition of two binary numbers:\n";
    cout << "-----------------------------------\n";
    cout << " Input the 1st binary number: ";
    cin >> bn1; // It prompts the user to input the first binary number and stores it in the bn1 variable.
    cout << " Input the 2nd binary number: ";
    cin >> bn2; // It then prompts the user to input the second binary number and stores it in the bn2 variable.

    /*The binary addition is performed using a while loop. It iterates as long as there are more digits in bn1 or bn2 to process.

Inside the loop, the program calculates the sum of the least significant digits of bn1, bn2, and the carry r, and stores the result in the sum array at position i. It also calculates the carry for the next iteration.

The least significant digits of bn1 and bn2 are extracted using the modulo operator (%), and the carry is added.

After calculation, bn1 and bn2 are updated by shifting one position to the right (division by 10 in binary) to process the next least significant digit.

If there's a carry remaining after processing all digits, it is stored in the sum array.*/
    while (bn1 != 0 || bn2 != 0)
    {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0)
    {
        sum[i++] = r;
    }
    --i;                                           /*The program decrements i to point to the last position in the sum array (where the most significant digit is stored).*/
    cout << " The sum of two binary numbers is: "; /*It then prints the result as the sum of two binary numbers by iterating through the sum array and displaying each digit.*/
    while (i >= 0)
    {
        cout << (sum[i--]);
    }
    cout << ("\n");
}