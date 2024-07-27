#include<stdio.h>
//Write a program to print ‘n’ natural numbers in reverse order.

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }   
    return 0;
}