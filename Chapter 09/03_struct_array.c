#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    // And so on

    // INITIALIZING STRUCTURES
    struct employee hello = {100, 71.22, "hello"};
    struct employee world = {0}; // All elements set to 0
    printf("%d %f %s\n", hello.code, hello.salary, hello.name);
    printf("%d %f %s\n", world.code, world.salary, world.name);
    
    return 0;
}