//program to show the execution of continue and break statement
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        if(i==3)
        {
            continue;
        }
        cout<<i<<",";
        if(i==5)
        {
            break;
        }
    }
    return 0;
}