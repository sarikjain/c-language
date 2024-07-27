#include<stdio.h>
/*
OPERATOR PRECEDENCE
Priority      Operators
1st             * / %
2nd             + -
3rd             =
*/

/*
OPERATOR ASSOCIATIVITY
x*y/z → (x*y)/z
x/y*z → (x/y)*z
--> *,/ follows left to right associativity
*/

//Always use parenthesis() in case of confusion

int main()
{
    int a = 3, b = 6, c = 9;

    printf("The value is %d\n", a*b/c + 7); //(a*b/c) + (7) --> (18/9) + (7) --> (2) + (7) --> 9
    printf("The value is %d\n", 3*b/2*c + 7*a); //(3*b/2*c) + (7*a) --> (18/2*c) + (21) --> (9*c) + (21) --> (81) + (21) --> 102
    return 0;
}