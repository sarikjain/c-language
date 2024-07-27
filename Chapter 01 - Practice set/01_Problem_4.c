//Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
#include<stdio.h>

int main()
{
    float C = 37.0, F;

    F = (9.0/5.0)*C + 32.0;

    printf("The value in Fahrenheit is %f", F);
    return 0;
}