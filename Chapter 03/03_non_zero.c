#include <stdio.h>
// for non-zero

int main()
{
    if (1)
    {
        printf("1. This if is executed!\n");
    }
    if (2345)
    {
        printf("2. This if is executed!\n");
    }
    if (3.15)
    {
        printf("3. This if is executed!\n");
    }
    if ('c')
    {
        printf("4. This if is executed!\n");
    }
    if (0)
    {
        printf("5. This if is not executed!\n");
    }
    return 0;
}