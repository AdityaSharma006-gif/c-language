//program to delete an element from any location or index of an array
#include <stdio.h>
int main()
{int i,lb,ub,item,loc;
    int a[4]={10,20,30,40};
    lb=0;
    ub=3;
    loc=2;
    printf("\n array element before deletion:\n");
    for(i=0;i<=ub;i++)    {
        printf("%d\t ",a[i]);
    }i=loc;
    item=a[i];
    while(i<=ub)    {
        a[i]=a[i+1];
        i=i+1;
    }
    ub=ub-1;
    printf("\n array element after deletion:\n");
    for(i=0;i<=ub;i++)    {
        printf("%d\t ",a[i]);
    }
    printf("\n");
    return 0;
}
