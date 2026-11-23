// 2.	Calculate the sum and average of all array elements.
#include<stdio.h>
void main()
{
    int a[20],i,n,sum=0;
    float avg;
    printf("enter how many elements you want in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    avg = sum/n;
    printf("sum = %d\naverage = %f",sum,avg);
}