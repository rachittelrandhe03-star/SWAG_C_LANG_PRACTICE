//3.	Print all prime numbers in a given range.
#include<stdio.h>
int main()
{
    int n,i,j,prime;
    printf("Please enter upto which number you want the list of the prime number:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        prime =0;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                prime = 1;
                break;
            }
            
        }
        if(prime == 0)
        {
            printf("%d \t",i);
        }
    }
}