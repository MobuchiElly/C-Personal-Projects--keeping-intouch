#include <stdio.h>

int main()
{

    int i;
    for (i = 0; i < 10; i++)
    {       
        if (i == 3)
        {continue;}
            putchar(i + '0');
            if (i < 9){
            putchar(','); }
            putchar(' ');
    }
      return(0);
}