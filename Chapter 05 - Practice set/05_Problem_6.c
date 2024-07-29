// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    // sum_natural(n) = 1 + 2 + 3 + ... + n-1 + n
    // sum_natural(n) = sum_natural(n-1) + n
    if (n == 1)
    {
        return 1;
    }
    return sum_natural(n - 1) + n;
}

int main()
{
    int n = 10;
    printf("the sum of first %d natural numbers is %d", n, sum_natural(n));
    return 0;
}