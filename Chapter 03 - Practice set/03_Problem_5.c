/*Write a program to determine whether a character entered by the user is 
lowercase or not.
*/
//ASCII VALUE --> https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter character : ");
    scanf("%c", &ch);
    //97 to 122 --> a to z
    //65 to 90 --> A to Z

    printf("The character is %c.\n", ch);
    printf("The ascii value of character is %d.\n", ch);

    if(ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase.\n");
    }
    else
    {
        printf("This character is uppercase.\n");
    }
    return 0;
}