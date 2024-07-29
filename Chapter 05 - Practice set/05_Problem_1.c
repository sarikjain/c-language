// Write a program using function to find average of three numbers.
#include <stdio.h>

float avg(int a, int b, int c);

float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 3, b = 6, c = 6;
    printf("The average of a, b and c is %f", avg(a, b, c));
    return 0;
}