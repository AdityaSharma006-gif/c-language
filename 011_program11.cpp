//program to show the execution of nested if statement
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=10;
    b=30;
    c=5;
    if(a>b)
    {
        if(a>c)
        {
            cout<<" a is greater ";
        }
        else{
            cout<<" c is greater ";
        }
    }else{
        if(b>c)
        {
            cout<<" b is greater ";
        }else{
            cout<<" c is greater ";
        }
    }return 0;
}
