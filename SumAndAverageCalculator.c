#include <stdio.h>

int sum(int test1, int test2);
int average(int sum, int numOfTests);


int main(void)
{
    int test1, test2;
    int numOfTests = 2;
    
   int Amaka_score = sum(10,20);

   int Amaka_avg = average(Amaka_score, numOfTests);
   printf("Amaka scored a total of %dmarks ", Amaka_score);
   printf("with an average of %d", Amaka_avg);
    return (0);
}

int sum(int test1, int test2)
{
    int b = test1 + test2;
    return(b);
}

int average(int sum, int numOfTests)
{ 
    int avg = sum/numOfTests;
    return(avg);
}