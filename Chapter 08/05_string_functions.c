#include <stdio.h>
#include <string.h>

int main()
{
    /* STRLEN() :
    This function is used to count the number of characters in the string excluding the null
    (‘\0’) characters.
    */
    char st[] = "Abcd";
    printf("%d\n", strlen(st));

    /* STRCPY() :
    This function is used to copy the content of second string into first string passed to it.
    */
    char str[] = "Efgh";
    char target[30];
    strcpy(target, str); // target now contains "Efgh"
    printf("%s %s\n", str, target);

    /* STRCAT() :
    This function is used to concatenate two strings.
    */
    char s1[12] = "hello";
    char s2[] = "abcd";
    strcat(s1, s2); // s1 now contains "helloabcd" <no space in between>
    printf("%s\n", s1);
    printf("%s\n", s2);

    /* STRCMP() :
    This function is used to compare two strings.
    */
    /*
    It returns 0 if the strings are equal, a
    negative value if the first string's mismatching character's ASCII value is less than the
    second string's corresponding mismatching character, and a positive value otherwise.
    */
    int a = strcmp("far", "joke");
    int b = strcmp("joke", "far");
    int c = strcmp("joke", "joke");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}