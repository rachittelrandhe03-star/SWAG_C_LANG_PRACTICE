// 3.	Print a pyramid pattern.
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter how many rows of triangle you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i-1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}