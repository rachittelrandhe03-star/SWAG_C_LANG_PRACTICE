// 1.	Print a right-angled triangle of stars.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter how many rows of triangle you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}