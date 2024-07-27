#include <stdio.h>
// if statement

int main()
{
    int age = 15;

    if (age > 10)
    {
        printf("Your age is greater than 10.\n");
    }
    if (age % 5 == 0) // check remainder, if 0 then print this
    {
        printf("We are inside if.\n");
    }
    return 0;
}