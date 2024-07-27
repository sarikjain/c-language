#include <stdio.h>
/*
LOGICAL OPERATORS :
&& --> AND
   --> “1 and 0, 0 and 1, 0 and 0” is evaluated as false.
   --> “1 and 1” is evaluated as true.
|| --> OR
   --> (1 or 0 → 1) (1 or 1 → 1) (0 or 1 → 1)
   --> (0 or 0 → 0)
!  --> NOT
   --> !(3==3) → evaluates to false
   --> !(1>5) → evaluates to true
*/

int main()
{
    int a = 0, b = 0; // 0, 1

    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("Now, the value of not(a) is %d\n", !a);

    /*
    if(a)
    {
        if(b)
        {
            printf("Both are true.\n");
        }
    }
    */
    // we can write this code as below...
    if (a && b)
    {
        printf("Both are true.\n");
    }
    return 0;
}