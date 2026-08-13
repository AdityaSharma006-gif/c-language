//program to show the execution of function
#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
    int x,y;
    x=10;
    y=20;
    int z;
    z=add(x,y);
    cout<<"addition of "<<x<<" and "<<y<<" is "<<z;
    return 0;
}int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}