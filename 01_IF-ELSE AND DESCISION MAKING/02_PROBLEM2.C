// 2.Write a program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("Please enter the number you want to check:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}