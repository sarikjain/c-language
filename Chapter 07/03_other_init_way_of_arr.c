#include <stdio.h>
// Other initiakization ways of array

int main()
{
    int cgpa[3] = {9, 8, 8}; // 1 integer = 4 bytes
    // int cgpa[3] = {9, 8, 8}; --> both are right

    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}