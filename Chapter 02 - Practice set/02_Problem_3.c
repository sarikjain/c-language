//Write a program to check whether a number is divisible by 97 or not.
#include<stdio.h>

int main()
{
    int a = 254525; //Not
    int b = 3349895; //Yes

    printf("The value of a%97 is %d\n", a%97);
    printf("The value of b%97 is %d\n", b%97);
    return 0;
}