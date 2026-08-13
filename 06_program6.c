//program to delete an element from ending of an array
#include <stdio.h>
int main()
{int i,lb,ub,item;
    lb=0;
    ub=2;
    int a[3]={30,50,90};
    i=ub;
    item=a[i];
    printf("array element before deletion:\n");
    for(i=0;i<=ub;i++)    {
        printf("%d\t ",a[i]);
    }
    ub=ub-1;
    printf("\n array element after deletion:\n");
    for(i=0;i<=ub;i++)    {
        printf("%d\t ",a[i]);
    }
    printf("\n");
    return 0;
}
