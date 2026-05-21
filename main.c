#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;

    srand(time(0));

    random = rand() % 100 + 1;

    printf("Guess the number (1 to 100)\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > random)
        {
            printf("Too High!\n");
        }
        else if(guess < random)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Correct Number!\n");
        }

    } while(guess != random);

    return 0;
}