#include<stdio.h>
//BREAK & CONTINUE STATEMENT

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if(i==7)
        {
            break; //exit the loop now!
        }
        if(i==3)
        {
            continue; //skip the iteration now!
        }
        printf("%d\n",i);
    }
    return 0;
}