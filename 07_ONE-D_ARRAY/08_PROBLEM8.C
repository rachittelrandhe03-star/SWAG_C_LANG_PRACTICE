// 8.	Sort an array in ascending order using bubble sort.
#include<stdio.h>
void main()
{
    int i,n,a[20],j,temp;
    printf("enter how many number of array you want");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is as follow \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}