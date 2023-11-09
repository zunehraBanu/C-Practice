#include <iostream>
using namespace std;
int main()
{
    int integers[]={1, 2, 3, 4};
    int size=sizeof(integers)/sizeof(integers[0]);

    //for loop
    for(int i=0; i<size; i++){
        cout<<integers[i]<<endl;
    }

    //for each loop
    for(int ele:integers){
        cout<<ele<<endl;
    }

    //while loop
    int i=0;
    while(i<size){
        cout<<integers[i]<<endl;
        i++;
    }
    return 0;
}