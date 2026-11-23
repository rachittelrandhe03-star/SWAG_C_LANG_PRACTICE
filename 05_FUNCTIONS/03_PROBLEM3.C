// 3. WRITE A FUNCTION TO CALCULATE X POWER N WITHOUT USING POWER FUNCTION 
#include<stdio.h>
int power1(int,int);
int main()
{
    int n,x,pow;
    printf("please enter the value of the x :");
    scanf("%d",&x);
    printf("please enter the power of x :");
    scanf("%d",&n);
    pow = power1(x,n);
    printf("the calculation's solution is %d",pow);

}
int power1(int x,int n)
{
    int i,pow1=1;
    for(i=0;i<n;i++)
    {
        pow1 = pow1*x;
        
    }
    return pow1;
}