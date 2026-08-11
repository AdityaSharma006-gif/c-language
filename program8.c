//program to copy an element of an array to another array
#include <stdio.h>
#define size 5
int main()
{int i,lb,ub,lb2,ub2;
    int a[size]={10,20,30,40,50};
    int b[size];
    printf("array elements are:\n");
    for(i=0;i<size;i++)    {
        printf("%d\t ",a[i]);
    }
    lb=0;
    ub=4;
    lb2=lb;
    ub2=ub;
    i=lb;
    while(i<=ub)    {
        b[i]=a[i];
        i=i+1;
    }
    printf("\n copied array elements are:\n");
    for(i=0;i<size;i++)    {
        printf("%d\t ",b[i]);
    }
    return 0;
}