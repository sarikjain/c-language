//Repeat problem 8 using while loop.
#include<stdio.h>

int main()
{
    int product = 1, n;
    int i = 1;

    scanf("%d", &n);

    //factorial of 4 means 4! = 1 X 2 X 3 X 4
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of a given number is %d", product);
    return 0;
}