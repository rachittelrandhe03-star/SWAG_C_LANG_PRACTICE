// 6.	Write a function that accepts an integer array and returns its largest element.
#include<stdio.h>
void ar_max();
int main()
{
   ar_max();
}
void ar_max()
{
    int i,n,max,a[50];
    printf("please enter how many numbers of array you wanna print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the maximum element from the array is %d",max);

}