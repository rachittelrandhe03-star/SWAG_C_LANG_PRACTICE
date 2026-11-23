// 6.	Create a menu-based calculator using if-else that performs addition, subtraction, multiplication, division, and modulus.
#include <stdio.h>
void main()
{
    int a,b,ch;
    printf("please enter the two numbers :");
    scanf("%d %d",&a,&b);
    printf("YOU ARE USING A SIMPLE CALCULATOR\n");
    printf("this is the list of the operations this calculator can perform :\n");
    printf("1.if you want to perform addition enter 1\n");
    printf("2.if you want to perform subtraction 2\n");
    printf("3.if you want to perform multiplication 3\n");
    printf("4.if you want to perform division 4\n");
    printf("5.if you want to perform modulus 5\n");
    printf("please enter the choice here:");
    scanf("%d",&ch);
    if(ch == 1)
    {
        printf("The addition of %d and %d is %d",a,b,a+b);
    }
    else if(ch == 2)
    {
        printf("The subtraction of %d and %d is %d",a,b,a-b);
    }
    else if(ch == 3)
    {
        printf("The multiplication of %d and %d is %d",a,b,a*b);
    }
    else if(ch == 4)
    {
        printf("The division of %d and %d is %d",a,b,a/b);
    }
    else if(ch == 5)
    {
        printf("The modulus of %d and %d is %d",a,b,a%b);
    }
    else{
        printf("please enter the valid choice");
    }
}