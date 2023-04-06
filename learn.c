#include <stdio.h>

int mult(int a, int b, int c);


int mult(int a, int b, int c)
{
    
}

int main(void)
{

    int a;
    int b;
    int c;
    int result;

    printf("Enter three numbers:  \n");
    scanf(" %d %d %d", &a, &b, &c);
    result = a * b * c; 

    printf("%d", result);

    return (0);
}