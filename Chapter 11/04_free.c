#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // FREE() FUNCTION : We can use free() function to deallocate the memory.
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    free(ptr);
    printf("%d", ptr[0]);
    return 0;
}