#include <stdio.h>

int main()
{
    int array[20] ={2, 31, 4 ,2 ,8};
    int *ptr[20];

    ptr[20] = &array[20];

    printf("Element at index 0 is %d", *ptr);
    return (0);
}