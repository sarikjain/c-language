#include<stdio.h>
//Write a program to print first ‘n’ natural numbers using for loop

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("i is %d\n", i);
    }   
    return 0;
}