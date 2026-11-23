// 4.	Print Floyd's triangle.

// TAKEN HINT FROM AI
#include<stdio.h>
int main()
{
    int i,j,num=1,n;
    printf("enter how many rows of triangle you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
        printf("%d",num);
        num++;
       }
       printf("\n");
    }
}