#include <stdio.h>
#include <stdarg.h>


int listNum(int args, ...);
int main()
{
    listNum(4, 1,2,5,7);
    return(0);
}

int listNum(int args, ...)
{
    int i;
    va_list listall;
    int listItems;

    va_start(listall, args);
    for (i = 0; i < args; i++)
    {
        listItems= va_arg(listall, int); 
        printf("%d  ", listItems);
    }
}