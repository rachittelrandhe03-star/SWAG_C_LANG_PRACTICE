// 3.	Reverse an array in place.
#include<stdio.h>
void main()
{
    int a[50],i,n,b[50];
    printf("please enter how many elements you want in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elemets present in the array are :\n");
    for(i=(n-1);i>=0;i--)
    {
        printf("%d \n",a[i]);
        // scanf("%d",b[i]);
    }
    
    
}