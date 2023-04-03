#include <stdio.h>
#include <stdarg.h>

double multNum(int args, ...);

int main()
{
    printf("The product of the given variables is %lf", multNum(4, 2.0 , 3.0 , 10.0, 10.0));
    
}

double multNum(int args, ...)
{
    int i;
    double product = 1;
    va_list pdt;

    va_start(pdt, args);

    for (i = 0; i < args; i++)
    {
        product *= va_arg(pdt, double);
    }
    va_end(pdt);
    return (product);
}