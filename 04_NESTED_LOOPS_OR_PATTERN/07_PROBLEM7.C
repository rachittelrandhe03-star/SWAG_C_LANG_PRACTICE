// 7.	Print a diamond pattern using stars.
#include<stdio.h>
int main()
{
    int i,j,k,num=1,n;
    printf("enter how many odd rows you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            for(j=0;j<n-1-i;j++)
        {
            printf(" ");
        }
            for(k=1;k<=2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=n-1-i;j++)
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

// not done yet havent got the desired output