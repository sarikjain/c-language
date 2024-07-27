#include<stdio.h>
//int & int -> int
//int & float -> float
//float & float -> float

int main()
{
    int a = 9;
    int b = 2;
    float c = a/b; //c = 4 not c = 4.5
    printf("The value of a/b is %f\n", c);

    float d = 9;
    int e = 2;
    float f = d/e; //f = 4.5 not f = 4
    printf("The value of a/b is %f\n", f);

    int g = 2.5;
    printf("g is %d\n", g); //demoted to g = 2
    return 0;
}