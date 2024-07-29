// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2
#include <stdio.h>

float f(float);

float f(float mass)
{
    return mass * 9.8;
}

int main()
{
    int m = 45;
    printf("The value of force is %f\n", f(m));
    return 0;
}