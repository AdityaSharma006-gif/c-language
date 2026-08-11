//program to reverse the number
#include<iostream>
using namespace std;
int main()
{
    int r,res,num;
    cout<<"enter a number : ";
    cin>>num;
    res=r=0;
    while(num>0)
    {
        r=num%10;
        res = res * 10 + r;
        num=num/10;
    }
    cout<<"reverse number : "<<res;
    return 0;
}