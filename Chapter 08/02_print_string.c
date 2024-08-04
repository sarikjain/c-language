#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c', '\0'}; // '\0' is a null character
    // Both are same
    char st[] = "abc"; // // In this case C adds a null character automatically.

    /*
    for (int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    */
    printf("%s", st); // %s for string

    return 0;
}