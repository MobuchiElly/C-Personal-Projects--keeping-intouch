#include <stdio.h>
#include <stdarg.h>

int addNum(int arg, ...)
{
    va_list ap;
    int i;
    int sum = 0;

    va_start(ap, arg);

    for (i = 0; i < arg; i++)
    {
        sum = sum + va_arg(ap, int);
    }
    va_end(ap);
        return(sum);
}

int main()
{

    printf("Sum = %d ", addNum(4, 1, 67, 4));
    return (0);
}