//program to traverse an array
#include <stdio.h>
int main()
{
    int i,size;
    printf("how many array element:\n");
    scanf("%d",&size);
    int a[size];
    printf("\n enter an array elements:\n");
    for(i=0;i<size;i++)    {
        scanf("%d",&a[i]);
    }
    printf("\n the array elements are:\n");
    for(i=0;i<size;i++)    {
        printf("%d ",a[i]);
    }
    return 0;
}