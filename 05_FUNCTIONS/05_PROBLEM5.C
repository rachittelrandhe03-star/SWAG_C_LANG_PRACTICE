// 5.	Build a menu-driven calculator using separate functions for each operation.
#include<stdio.h>
int main()
{
    int a,b,ch;
    void add(int,int);
    void sub(int,int);
    void mul(int,int);
    void div(int,int);
    printf("please enter the values of two number you want to perform operations on:");
    scanf("%d %d",&a,&b);
    printf("enter 1 if you want to perform ADDITION\nenter 2 if you want to perform SUBTRACTION\nenter 3 if you want to perform MULTIPLICATION\nenter 4 if you want to perform DIVISION\n");
    scanf("%d",&ch);
    if(ch == 1)
    {
        add(a,b);
    }
    else if(ch == 2)
    {
        sub(a,b);
    }
    else if(ch == 3)
    {
        mul(a,b);
    }
    else if(ch == 4)
    {
        div(a,b);
    }
    else 
    {
        printf("please enter the valid input");
    }
}
void add(int a,int b)
{
    printf("addition = %d",a+b);
}
void sub(int a,int b)
{
    printf("subtraction = %d",a-b);
}
void mul(int a,int b)
{
    printf("multiplication = %d",a*b);
}
void div(int a,int b)
{
    printf("division = %d",a/b);
}