#include <stdio.h>

int SumOfElements(int arr[5])
{
        int i, sum;
        arr[5];
        for (i = 0; i < 5; i++)
        {
            printf("%d", arr[i]);
            if (i < 4)
            {
                printf(", ");
            }
        
        } 
}


int main()
{
    int array[] = {2,3,4,19,2};
    SumOfElements(array); 
    return (0);          

}