#include <stdio.h>
// w - write mode clean the file first and then write
// a - append mode clean the file first and then write

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}