//program to show the execution of system and user 
//defined function
#include<iostream>
#include<cmath>
using namespace std;
void display();
int main()
{
    cout<<"working of system function"<<endl;
    cout<<"power of 5 is "<<pow(5,2);
    display();
    return 0;
}
void display()
{cout<<"user defined function run";
}
