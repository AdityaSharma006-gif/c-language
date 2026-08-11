// program to show the execution of global and local variables 
#include<iostream>
int a =10;
void display();
int main()
{
    int y=5;
    y=a+y;
    std::cout<<"the value of y is :"<<y;
    display();
}
void display()
{
    int a=5;
    a=a+::a;
    std::cout<<"\nthe value of a is :"<<a;
}