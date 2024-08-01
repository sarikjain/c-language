#include <stdio.h>

int main()
{
    // Address Of(&) Operator
    int i = 72;                             // this value is stored in memory with address - 0061FF18 / 6422296
    int *j = &i;                            // j is a pointer pointing to i (j is an integer pointer)
    printf("The address of i is %p\n", &i); // we can use %p or %u for address
    printf("The address of i is %u\n", j);

    // Value at Address(*) Operator
    printf("The value at address j is %d\n", *j); // i = 72
    printf("The value at address j is %d\n", *(&i)); 
    return 0;
}