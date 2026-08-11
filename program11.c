//program to add two matrices into single matrix
#include<stdio.h>
int main()
{
    int i,j,row,column;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];
    row=2;
    column=2;
    printf("\n first matrix elements are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n second matrix elements are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
        printf("\n sum matrix elements are:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
           return 0;
    }
 
