// 3.	Find the greatest among three numbers using nested if-else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the number you wanna compare :");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b || a<c)
    {
        if(b<c)
        {
            printf("the greatest number is %d",c);
        }
        else
        {
            printf("The greatest number is %d",b);
        }
    }
    else{
        printf("The geatest number is %d",a);
    }
}