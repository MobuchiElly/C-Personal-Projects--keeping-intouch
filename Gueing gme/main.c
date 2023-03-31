#include <stdio.h>

int main()
{
    int guesscount = 0;
    int guessnum = 5;

    while (guesscount <= 4)
    {
        printf("Guess a number: ");
        scanf("%d",&guessnum);
        if(guessnum == 5)
        {
            printf("You win!");
        }
        if(guessnum != 5)
        {
            printf("You lose\n");
        }
        guesscount++;
    }

    return 0;
}