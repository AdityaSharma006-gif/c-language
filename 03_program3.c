//program to insert elements at the end of an array
#include <stdio.h>
int main()
{int i,lb,ub,element;
    lb=0;
    ub=3;
    element=50;
    int a[5]={10,20,30,40};
    i=ub;
    i=i+1;
    a[i]=element;
    ub=ub+1;
    printf("array elements are:\n");
    for(i=0;i<=ub;i++)    {
        printf("%d\t ",a[i]);
    }
    return 0;
}
