//program to show the execution of forward goto
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    c=a+b;
    goto xy;
    d=a-b;
    cout<<"\n subtraction result : "<<d;
    xy:
    cout<<"\n addition result :"<<c;
    return 0;
}
