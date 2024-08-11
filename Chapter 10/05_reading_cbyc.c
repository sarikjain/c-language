#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("hello.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // when all the content of a file has been read break the loop!
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}