//program to delete an element from starting of an array
#include <stdio.h>
int main()
{int i,lb,ub,item;
    lb=0;
    ub=3;
    int a[4]={10,20,30,40};
    item=a[lb];
    i=lb;
    while(i<=ub)
    {
        a[i]=a[i+1];
        i=i+1;
    }
    ub=ub-1;
    printf("array elements are:\n");
    for(i=0;i<=ub;i++)
    {
        printf("%d\t ",a[i]);
    }
    return 0;
}
