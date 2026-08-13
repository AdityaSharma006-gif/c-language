//program to show the execution of else if 
#include<iostream>
using namespace std;

int main()
{
    int a;
    
    cout<<"enter a number:";
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is positive";
    }
    else if(a<0)
    {
        cout<<a<<" is negative";
    }
    else if(a==0)
    {
        cout<<a<<" is neutral";
    }return 0;
}
