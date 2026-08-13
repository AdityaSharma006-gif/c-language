//program to show the execution of switch statement
#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter the day number (1-7): ";
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday\n";
        break;
        default:
        cout<<" invalid day number ";
    }return 0;
}
