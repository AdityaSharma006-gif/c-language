//program to insert new element in any location of an array
#include <stdio.h>
int main()
{int i,lb,ub,element,loc;
    printf("enter an upper bound of an array:\n");
    scanf("%d",&ub);
    int a[ub];
    printf("enter an array elements:\n");
    for(i=0;i<ub;i++)    {
        scanf("%d",&a[i]);
    }
    printf("enter an element to insert:\n");
    scanf("%d",&element);
    printf("enter a location to insert an element:\n");
    scanf("%d",&loc);
    i=ub-1;
    while(i>=loc)    {
        a[i+1]=a[i];
        i=i-1;
    }
    a[loc]=element;
    ub=ub+1;
    printf("array elements are:\n");
    for(i=0;i<ub;i++)    {
        printf("%d\t ",a[i]);
    }
    return 0;
}
