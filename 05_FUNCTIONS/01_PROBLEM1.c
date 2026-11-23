// 1.	Write a function that returns the maximum of two integers.
#include<stdio.h>
int max(int,int);
int main()
{
    int a,b,maximum;
    printf("please enter the two number you want to compare :");
    scanf("%d %d",&a,&b);
    maximum = max(a,b);
    printf("the maximum of the two number is %d ",maximum);
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}