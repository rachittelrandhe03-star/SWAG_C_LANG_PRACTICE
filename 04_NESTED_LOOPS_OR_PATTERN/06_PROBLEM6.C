// 6.	Print a hollow square pattern using stars.
#include<stdio.h>
int main()
{
    int i,j,num=1,n;
    printf("enter how many rows of triangle you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1||j==n)
            {
                printf("* ");
            }
            else
            {
                    printf("  ");
            }
        }
        printf("\n");
    }
}