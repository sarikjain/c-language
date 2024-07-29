#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4

    // Factorial(n) = 1 X 2 X 3 X ... X n-1 X n
    // Factorial(n-1) = 1 X 2 X 3 X ... X n-1

    // Factorial(n) = Factorial(n-1) X n
    if (n == 0 || n == 1) // Base condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int a = 4;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}