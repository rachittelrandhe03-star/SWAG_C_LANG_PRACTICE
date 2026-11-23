// 2.	Accept a month number and display the number of days in that month, considering leap years for February.
#include<stdio.h>
int main()
{
    int month,year,leap =0;
    printf("Please enter the number of the month and year you wanna check:");
    scanf("%d %d",&month,&year);
    if(year%4 == 0)
    {
       leap = 1;
    }
    if(leap = 1)
    {
        if(month==1 || month==3 || month==5 || month==7 || month == 8 ||month==10 || month ==12 )
        {
            printf("there are 31 days in this month");
        }
        else if(month == 2)
        {
            printf("there are 29 days in this month");
        }
        else
        {
            printf("there are 30 days in this month");
        }
    }

    else
    {
        if(month==1 || month==3 || month==5 || month==7 || month == 8 ||month==10 || month ==12 )
        {
            printf("there are 31 days in this month");
        }
        else if(month == 2)
        {
            printf("there are 28 days in this month");
        }
        else
        {
            printf("there are 30 days in this month");
        }
    }


}
