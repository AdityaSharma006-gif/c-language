//program to show the execution of passing argumemt
//to the function and returning value from the functiom
#include<iostream>
using namespace std;
int sub(int a,int b);
int main()
{
    int c;
    c=sub(10,5);
    cout<<"value of c = "<<c;
    return 0;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
