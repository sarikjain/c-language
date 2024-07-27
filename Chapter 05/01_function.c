#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    // printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1, b = 2;
    // int a = 1, b = 2;
    // printf("The sum is %d\n", a+b);
    int c = sum(a, b); // Function call
    printf("%d\n", c);

    int a1 = 3, b1 = 8;
    // int a1 = 3, b1 = 8;
    // printf("The sum is %d\n", a1+b1);
    int c1 = sum(a1, b1); // Function call
    printf("%d\n", c1);

    int a2 = 5, b2 = 9;
    // int a2 = 5, b2 = 9;
    // printf("The sum is %d\n", a2+b2);
    int c2 = sum(a2, b2); // Function call
    printf("%d\n", c2);
    return 0;
}