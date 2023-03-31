#include <stdio.h>

int main()
{

    int guessCount = 0;
    int guessNum = 5;

    while (guessCount <= 3)
    {
        printf("Guess a number: ");
        printf("\n");
        scanf("%d",&guessNum);

        if(guessNum == 5)
        {
            printf("You win!");
            return(0);
        }
        if(guessNum != 5)
        {
            printf("You lose\n\n");
        }

        guessCount++;

        switch (guessCount)
        {
        case 0:
        printf("You have three chances only\n");
            break;
        case 1:
            printf("You have two more chances\n");
            break;
        case 2:
            printf("You have 1 last chance. You can win this.\n");
            break;
        default:
            printf("You're out of chances");
            break;
        }
    }

    return (0);

}