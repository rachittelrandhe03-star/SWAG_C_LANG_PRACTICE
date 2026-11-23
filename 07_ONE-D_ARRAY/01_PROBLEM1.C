// Read N integers and find the largest and smallest elements.
#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    printf("enter how many elements you want in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("the maximum value from the array is %d and the minimum value from the array is %d",max,min);
}