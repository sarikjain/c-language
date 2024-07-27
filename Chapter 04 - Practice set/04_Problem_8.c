//Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main()
{
    int product = 1, n;

    scanf("%d", &n);

    //factorial of 4 means 4! = 1 X 2 X 3 X 4
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of a given number is %d", product);
    return 0;
}