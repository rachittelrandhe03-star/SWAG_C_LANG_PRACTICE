// 2.	Count the digits of an integer and calculate the sum of its digits.
#include<stdio.h>
int main()
{
    int rem=0,n,sum=0,num;
    printf("Please enter the number you want to check :");
    scanf("%d",&n);
    num = n;
    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("the sum of the digits of number is %d\n",sum);
    
}