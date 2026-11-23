// 2.	Print an inverted star triangle.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter how many rows of triangle you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}