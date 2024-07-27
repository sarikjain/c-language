#include<stdio.h>
//INCREMENT AND DECREMENT OPERATORS

int main()
{
    int i = 5; //i=5
    printf("The value of i is %d\n", i);
    
    i = i + 5; //i=10
    printf("The value of i is %d\n", i);
    
    printf("The value of i is %d\n", i++); //print i=10 but i=11
    //i++ prints first & then increments (Post Increment Operator)
    printf("The value of i is %d\n", ++i);
    //++i increments first & then prints (Pre Increment Operator)
    
    printf("The value of i is %d\n", i--); //print i=12 but i=11
    //i-- prints first & then decrements (Post decrement Operator)
    printf("The value of i is %d\n", --i);
    //--i decrements first & then prints (Pre decrement Operator)

    i += 2; //i = i + 2; //same --> -=, *=, /=, %= and more
    return 0;
}