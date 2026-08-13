//write a program to merge two arrays in single array
#include <stdio.h>
#define M 5
#define N 5
int main()
{int i,k,j;
    int a[M]={10,20,30,40,50};
    int b[N]={60,70,80,90,100};
    int c[M+N];
    printf("array a elements are:\n");
    for(i=0;i<M;i++)    {
        printf("%d\t ",a[i]);
    }
    printf("\n array b elements are:\n");
    for(i=0;i<N;i++)    {
        printf("%d\t ",b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<M && j<N)    {
        if(a[i]<b[j])        {
            c[k]=a[i];
            i=i+1;
            k=k+1;
        }
        else        {
            c[k]=b[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<M)    {
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<N)    {
        c[k]=b[j];
        j=j+1;
        k=k+1;
    }
    printf("\n merged array elements are:\n");
    for(i=0;i<M+N;i++)    {
        printf("%d\t ",c[i]);
    }
     return 0;
}
