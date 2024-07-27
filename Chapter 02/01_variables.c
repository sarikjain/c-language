#include <stdio.h>

int main()
{
    int i = 10;                     // Declare and initialize 'i' with 10
    int j = i;                      // Declare 'j' and initialize with 'i'
    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
    
    //%d, %f, %c is called format sprecifier
    //%d for int, %f for float, %%c for char
    printf("The value of i is %d & value of j is %d\n", i, j);        
    printf("The value of a is %d & value of b is %d\n", a, b);
    printf("The value of c is %d & value of d is %d\n", c, d);
    return 0;
}