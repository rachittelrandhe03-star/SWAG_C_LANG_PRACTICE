//1.	Build a calculator using switch-case.
#include <stdio.h>
void main()
{
    int a,b,ch;
    printf("please enter the two numbers :");
    scanf("%d %d",&a,&b);
    printf("YOU ARE USING A SIMPLE CALCULATOR");
    printf("this is the list of the operations this calculator can perform :\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulus\n");
    printf("please enter the choice here:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("the addition of %d and %d is %d\n",a,b,a+b);
        break;
        case 2:printf("the subtraction of %d and %d is %d\n",a,b,a-b);
        break;
        case 3:printf("the multiplication of %d and %d is %d\n",a,b,a*b);
        break;
        case 4:printf("the division of %d and %d is %d\n",a,b,a/b);
        break;
        case 5:printf("the modulus of %d and %d is %d\n",a,b,a%b);
        break;
        defaut : printf("please enter the valid input\n");
    }

}