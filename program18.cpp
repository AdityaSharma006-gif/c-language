//program to check whether number is armstrong or not
#include<iostream>
using namespace std;
int main()
{
    int r,temp,arm,num;
    cout<<"enter a number : ";
    cin>>num;
    arm=r=0;
    temp=num;
    while(temp>0)
    {
        r=temp%10;
        arm=arm+(r*r*r);
        temp=temp/10;
    }
    if(num==arm)
    cout<<num<<" is armstrong number";
    else
    cout<<num<<" is not armstrong number";
    return 0;    }