#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 50;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d", (*ptr).code);
    printf("%d", ptr->code); // Exactly same as (*ptr).code

    return 0;
}