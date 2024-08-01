#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (j is an integer pointer)
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", j);

    float k = 5.25;
    float *l = &k; // j is a pointer pointing to i (j is an integer pointer)
    printf("The address of i is %p\n", &k);
    printf("The address of i is %u\n", l);

    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));

    printf("The value at address l is %d\n", *l);
    printf("The value at address l is %d\n", *(&k));
    return 0;
}