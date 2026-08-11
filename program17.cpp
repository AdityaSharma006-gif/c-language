//program to check whether number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int r,temp,pal,num;
    cout<<"enter a number : ";
    cin>>num;
    pal=r=0;
    temp=num;
    while(temp>0)
    {
        r=temp%10;
        pal=pal*10+r;
        temp=temp/10;
    }
    if(num==pal)
    cout<<num<<" is palindrome number";
    else
    cout<<num<<" is not palindrome number";
    return 0;
}