#include <stdio.h>

typedef struct
{
    char name[25];
    int founded;
    char rank;
} FootballClub;


int main()
{
    FootballClub liverpool = {"Liverpool", 1892, 'S'};
    FootballClub arsenal = {"Arsenal", 1886, 'A'};

    printf("\n%s(founded in %d): %c ", liverpool.name, liverpool.founded, liverpool.rank);
    printf("\n%s(founded in %d): %c ", arsenal.name, arsenal.founded, arsenal.rank);

    return 0;
}