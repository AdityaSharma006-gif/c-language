//program to show the execution of backward goto
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    start:
    cout<<"enter the value of x: ";
    cin>>x;
    if(x<0)
    {
        goto start;
    }
    y+=x;
    cout<<" the value of y is : "<<y;
    return 0;
}
