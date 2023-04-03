#include <stdio.h>

int addNum(int size, int array[]);

int main()
{
    int array[] = {12, 23, 43, 56, 78};
    int n = addNum(5, array);
    printf("%d", n);

}

int addNum(int size, int array[])
{
    int i;
    int sum = 0;
    
    for(i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return(sum);
}