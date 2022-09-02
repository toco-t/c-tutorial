#include <stdio.h>
#include <string.h>

struct FootballClub
{
    char name[20];
    char rank;
};

int main()
{
    struct FootballClub liverpool;
    struct FootballClub manchester;

    strcpy(liverpool.name, "Liverpool");
    liverpool.rank = 'S';

    strcpy(manchester.name, "Manchester");
    manchester.rank = 'F';

    printf("\n%s: %c ", liverpool.name, liverpool.rank);
    printf("\n%s: %c ", manchester.name, manchester.rank);

    return 0;
}