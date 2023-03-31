#include <stdio.h>

int main()
{
    int array[5];
    int *ptr;
    ptr = &array[0];

    array[0] = 3;
    array[1] = 5;
    array[2] = 10;
    array[3] = 7;
    array[4] = 4;
 
    // printf("%d\n", array[3]);
    printf("%d\n", array[0]);
    printf("%d\n", *array);
    // printf("%d", *ptr);

     printf("%p\n", &array);
     printf("%d\n", array);

    return(0);
}