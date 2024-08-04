#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st
    printf("%s\n", st);

    puts(st); // Prints the string & places the cursor on the next line
    printf("Hey");
    
    return 0;
}