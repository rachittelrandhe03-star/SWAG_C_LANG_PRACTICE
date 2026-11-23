// 4.	Write a program to calculate a student's grade based on marks, with appropriate ranges.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total_marks;
    float students_total,student_percentage;
    printf("Enter your marks in maths out of 100:");
    scanf("%d",&a);
    printf("Enter your marks in chemestry out of 100:");
    scanf("%d",&b);
    printf("Enter your marks in biology out of 100:");
    scanf("%d",&c);
    printf("Enter your marks in english out of 100:");
    scanf("%d",&d);
    printf("Enter your marks in history out of 100:");
    scanf("%d",&e);
    total_marks = a+b+c+d+e;
    students_total = (a+b+c+d+e)/500.0;
    student_percentage = students_total*100;
    printf("your total score is %d and your percentage is %f \n",total_marks,student_percentage);
    if(90<student_percentage && student_percentage<=100)
    {
        printf("you are passed with A grade");
    }
    else if(80<student_percentage && student_percentage<=90)
    {
        printf("you are passed with B grade");
    }
    else if(70<student_percentage && student_percentage<=80)
    {
        printf("you are passed with C grade");
    }
    else if(60<student_percentage && student_percentage<=70)
    {
        printf("you are passed with D grade");
    }
    else if(50<student_percentage && student_percentage<=60)
    {
        printf("you are passed with E grade");
    }
    else if(student_percentage<=50)
    {
        printf("your result is FAIL");
    }
    return 0;
}