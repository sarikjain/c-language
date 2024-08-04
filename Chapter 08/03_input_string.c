#include<stdio.h>

int main()
{
    char st[4];

    scanf("%s", st); //We can use %s with scanf to take string input from the user
    printf("%s", st);
    
    return 0;
}
/*
1. The string should be short enough to fit into the array.
2. scanf cannot be used to input multi-word strings with spaces.
*/