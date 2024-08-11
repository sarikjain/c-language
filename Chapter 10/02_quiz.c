#include <stdio.h>
/*
Modify the program above to check whether the file exists or not before 
opening the file.
*/

int main()
{
    FILE *ptr;
    ptr = fopen("hell.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist sorry! \n");
    }
    else
    {

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fclose(ptr); // CLOSING THE FILE
    }
    return 0;
}