//program to insert element at starting of an array
#include <stdio.h>
int main()
{int i,lb,ub;
    lb=0;
    ub=3;
    int a[5]={10,20,30,40,50};
    i=ub;
    while(i>=lb)
    {
        a[i+1]=a[i];
        i=i-1;
    }
    int item=5;
    ub=ub+1;
    printf("array elements are:\n");
    for(i=0;i<=ub;i++)
    {
        printf("%d\t ",a[i]);
    }
    return 0;
}
