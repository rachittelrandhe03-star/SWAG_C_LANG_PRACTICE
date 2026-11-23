// 1.write a c program to check whether a number is positive,negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("please enter the number you want to check:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number is positive");
    }
    else if(n<0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("the number is zero");
    }
}