// 1.	Find the factorial of a number using recursion.
#include<stdio.h>
int factorial(int);
int main()
{
    int n,fact1;
    printf("Please enter the value of the number you want factorial for:");
    scanf("%d",&n);
    fact1=factorial(n);
    printf("the factorial is %d",fact1);
    
}
int factorial(int n)
{
    if(n<0)
    {
        printf("the factorial of negative number does not exist or is undefined");
    }
    else if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}