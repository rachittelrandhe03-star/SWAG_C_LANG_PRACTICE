//2.	Create separate functions to check whether a number is prime, even, and a palindrome.
#include<stdio.h>
int prime(int);
int even(int);
int palindrom(int);
int main()
{  
    int n,prime1,even1,palindrom1;
    printf("please enter the value of the number :");
    scanf("%d",&n);
    prime1 = prime(n);
    even1 = even(n);
    palindrom1 = palindrom(n);
    printf("%s",prime1);
    printf("%s",even1);
    printf("%s",palindrom1);
}
int prime(int n)
{  
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            printf("the number is not a prime number\n");
            break;
        }
        else
        {
            printf("the number is the prime number\n");
            break;
        }
    }
    return 0 ;

}
int even(int n)
{
    if(n%2==0)
    {
        printf("the number is the even number\n");
    }
    else
    {
        printf("the number is odd number\n");
    }return 0 ;
}
int palindrom(int n)
{
    int rem=0,rev=0,num;
    num = n;
    while(n!=0)
    {
        rem= n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(num == rev)
    {
        printf("the number is the palindrom number\n");
    }
    else
    {
        printf("the number is not a palindrom number\n");
    }return 0 ;
}
