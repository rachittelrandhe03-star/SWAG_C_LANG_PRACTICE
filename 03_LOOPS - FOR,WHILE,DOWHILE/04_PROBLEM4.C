// 4.	Check whether a number is an Armstrong number.


// FIRST OF ALL THE ARMSTRONG NUMBER IS THE NUMBER IN WHICH THE SUM OF THE CUBES OF THE NUMBER IS EQUAL TO THE NUMBER ITSELF.

#include<stdio.h>
int main()
{
    int n,rem=0,num=0,num1;
    printf("please enter the number :");
    scanf("%d",&n);
    num1 = n;
    while(n!=0)
    {
        rem = n%10;
        num = num + rem*rem*rem;
        n = n/10;
    }
    if(num == num1)
    {
        printf("the number is the armstrong number");
    }
    else
    {
        printf("the number is not the armstrong number");
    }
}