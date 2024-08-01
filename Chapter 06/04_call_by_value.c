#include <stdio.h>
// 1st TYPE OF FUNCTION CALL

int sum(int, int);

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 & 6 is %d\n", sum(x, y));
    return 0;
}