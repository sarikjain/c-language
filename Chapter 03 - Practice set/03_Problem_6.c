//Write a program to find greatest of four numbers entered by the user.
#include<stdio.h>

int main()
{
    int a=4, b=261, c=6, d=20;

    if(a>b && a>c && a>d)
    {
        printf("The greatest of all is %d.\n", a);
    }
    else if(b>c && b>c && b>d)
    {
        printf("The greatest of all is %d.\n", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("The greatest of all is %d.\n", c);
    }
    else
    {
        printf("The greatest of all is %d.\n", d);
    }
    return 0;
}