//program to find largest and smallest element in an array
#include<stdio.h>
int main()
{
    int i,smallest,largest;
    int a[5]={10,20,30,40,50};
    int lb,ub;
    lb=0;
    ub=3;
    printf("\n array elements are:\n");
    for(i=0;i<=ub;i++)
    {
        printf("%d\t",a[i]);
    }
    largest=smallest=a[lb];
    i=0;
    while(i<=ub)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
        if(smallest>a[i])
        {
            smallest=a[i];
        }
        i=i+1;
    }
    printf("\n smallest value of an array is %d and largest value of an array is %d",smallest,largest);
     return 0;
}
