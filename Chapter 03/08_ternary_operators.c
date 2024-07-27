#include <stdio.h>
// condition ? expression-if-true : expression-if-false
// Here "?" and ":" are called Ternary Operator

int main()
{
    int a = 345, b = 35005;

    // condition ? expression-if-true : expression-if-false
    a>b ? printf("a is greater") : printf("b is greater");
    return 0;
}