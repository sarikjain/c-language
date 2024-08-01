/*
Write a program having a variable ‘i’. Print the address of ‘i’.
Pass this variable to a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>

int ret_5(int *ptr)
{
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}

int main()
{
    int i = 3;
    int *ptr = &i;

    printf("The address of i is %u\n", &i);
    ret_5(ptr);
    return 0;
}