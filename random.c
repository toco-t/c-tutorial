#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    const int MINIMUM = 1;
    const int MAXIMUM = 100;
    int guess;
    int score = 100;
    int answer;

    // use current time as a seed to generate some pseudo random numbers
    srand(time(0));

    // generate a random number in range of (min, max)
    answer = rand() % MAXIMUM + MINIMUM;

    do {
        printf("What's your guess?: ");
        scanf("%d", &guess);

        if (guess > answer) 
        {
            printf("Lower!\n");
        }
        else if (guess < answer)
        {
            printf("Higher!\n");
        } 
        else
        {
            printf("CORRECT!!!\n");
        }
        score--;
    } while (guess != answer);

    printf("***********************\n");
    printf("Answer: %d\n", answer);
    printf("Score: %d\n", score);
    printf("***********************\n");

    return 0;
}