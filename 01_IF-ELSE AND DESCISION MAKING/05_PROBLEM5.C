// 5.	Check whether a year is a leap year.
#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the year :");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        printf("The year %d is a leap year.",year);
    }
    else{
        printf("The year is not the leap year.");
    }
}