// Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>
// devidible by 1 and own
// 0 & 1 is not a prime number
// 2, 3, 5, 7, ... are prime numbers
// 4, 6, 8, 9, ... are non prime numbers

int main()
{
    int n = 7;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is non prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }
    return 0;
}