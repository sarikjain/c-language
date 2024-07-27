#include<stdio.h>
/*
Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/

int main()
{
    char grade;
    float marks;

    printf("Enter marks : ");
    scanf("%f", &marks);

    if(marks <= 100 && marks >= 90)
    {
        grade = 'A';
        printf("Grade is %c\n", grade);
    }
    if(marks <= 89 && marks >= 80)
    {
        grade = 'B';
        printf("Grade is %c\n", grade);
    }
    if(marks <= 79 && marks >= 70)
    {
        grade = 'C';
        printf("Grade is %c\n", grade);
    }
    if(marks <= 69 && marks >= 60)
    {
        grade = 'D';
        printf("Grade is %c\n", grade);
    }
    if(marks <= 59 && marks >= 50)
    {
        grade = 'E';
        printf("Grade is %c\n", grade);
    }
    if(marks < 50)
    {
        grade = 'F';
        printf("Grade is %c\n", grade);
    }
    return 0;
}