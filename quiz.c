#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {
        "1. What year did the C language debut?: ",
        "2. Who is credited with creating C?: ",
        "3. What is the predecessor of C?: "
    };

    char options[][100] = {
        "A. 1972", "B. 1975", "C. 1999",
        "A. Nikola Tesla", "B. John Carmack", "C. Dennis Ritchie",
        "A. Objective-C", "B. B", "C. x86"
    };

    char answers[3] = { 'A', 'C', 'B'};

    int number_of_questions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    char buffer;
    int score = 0;

    for (int i = 0; i < number_of_questions; i++)
    {
        printf("------------------------------------------\n");
        printf("%s\n", questions[i]);
        printf("------------------------------------------\n");
        
        for (int j = (i * 3); j < (i * 3) + 3; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("\nWhat's your guess (A, B or C)?: ");
        scanf("%c", &guess);
        scanf("%c", &buffer); // to clear \n from input buffer...
        
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("Correct!!\n");
            score++;
        }
        else
        {
            printf("Wrong...\n");
        }
    }

    printf("------------------------------------------\n");
    printf("Final Score: %d/%d\n", score, number_of_questions);
    printf("------------------------------------------\n");

    return 0;
}
