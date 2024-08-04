#include <stdio.h>

int main()
{
    char st[] = {'a', 'b', 'c', '\0'}; // '\0' is a null character
    // Both are same
    char str[] = "ABC"; // // In this case C adds a null character automatically.

    printf("First character is %c\n", st[0]);
    for (int i = 0; i <= 3; i++)
    {
        printf("Character is %c\n", str[i]);
    }

    return 0;
}