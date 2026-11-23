// 4.	Swap two numbers using a function and demonstrate the effect of C's pass-by-value mechanism.


// done by using call by referance mechanism by doing it by call by value mechanism we can never get the desire output....tested
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("please enter the value of two number:");
    scanf("%d%d",&a,&b);
    printf("before swapping :a=%d b=%d",a,b);
    swap(&a,&b);
    printf("after swapping:a=%d b=%d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    

}