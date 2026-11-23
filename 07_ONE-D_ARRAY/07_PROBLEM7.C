// 7.	Implement linear search and binary search.
//(linear search)
#include<stdio.h>
void main()
{
    int a[50],i,n,key,found =0;
    printf("enter how many number of array you want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("please enter the number you wish to find in the array :");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
        found = 1;
        }
    }
    if(found == 1)
    {
        printf("the number is present in the array");
    }
    else
    {
        printf("the number not found in the array");
    }
}
// BINARY SEARCH
# include<stdio.h>
void main()
{
    int a[50],i,n,mid,low,high,key;
    printf("please enter how many numbers of the array you want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of the key you want to find in the aray :");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    mid = (low + high)/2;
    while(low<=high)
    {
        if(a[mid] == key)
        {
            printf("the number is found at %d location",mid+1);
            break;
        }
        else if(key>a[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
        mid = (high + low)/2;

    }
    if(key != a[mid])
    {
        printf("the number is not present in the array");
    }
}