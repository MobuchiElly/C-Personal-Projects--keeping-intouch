/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{ 
int a = 9;
int *p,**ptr;

p = &a;
**ptr = *p;

printf("%d\n", *p);
printf("%d\n", **ptr);

    return 0;
}