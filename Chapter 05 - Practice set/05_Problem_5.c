// What will the following line produce in a C program:
#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4 --> right to left
    // 4 5 5 --> left to right
    return 0;
}