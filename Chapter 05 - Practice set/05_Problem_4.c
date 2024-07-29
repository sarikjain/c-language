// Write a program using recursion to calculate nth element of Fibonacci series.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
#include <stdio.h>

int fibo(int);

int fibo(int n)
{
    // fibo(n) = fibo(n-1) + fibo(n-2)
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 4;
    printf("The value of fibonacci series at %d is %d", n, fibo(n));
    return 0;
}