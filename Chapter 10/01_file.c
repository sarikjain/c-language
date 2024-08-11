#include <stdio.h>
// A FILE pointer can be created as follows:

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr); // CLOSING THE FILE

    return 0;
}