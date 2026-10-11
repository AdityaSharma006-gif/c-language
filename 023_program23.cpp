//program to show the execution of call by reference
#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
    int a,b;
    a=10;
    b=20;
    cout<<"the value of a is : "<<a<<
    " and value of b is : "<<b<<" before swap";
    swap(&a,&b);
    cout<<"\n the value of a is : "<<a<<
    " and the value of b is : "<<b<<" after swap";
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
temp=*a;
*a=*b;
*b=temp;
}
