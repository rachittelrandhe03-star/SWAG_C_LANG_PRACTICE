// 1.	Reverse a number and determine whether it is a palindrome.
#include<stdio.h>
int main()
{
    int rem=0,n,rev=0,num;
    printf("Please enter the number you want to check :");
    scanf("%d",&n);
    num = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("the reverse of the number is %d\n",rev);
    if(num = n)
    {
        printf("the number is a palindrom number");
    }
    else
    {
        printf("the number is not the palindrom number");
    }
}
