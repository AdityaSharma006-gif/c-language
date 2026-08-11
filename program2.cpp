//program to show the execution of macro function
#include<iostream>
#define SQUARE(x) ((x)*2)
int main()
{
    int x=5;
    std::cout<<"square of "<<x<<" is: ";
    int y;
    y=SQUARE(x);
    std::cout<<y;
    return 0;
}