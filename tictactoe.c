#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// global variables
char board[3][3];
const char PLAYER = 'O';
const char COMPUTER = 'X';

// function prototypes
void resetGameBoard();
void printGameBoard();
bool checkEmptySpaces();
void playerMove();
void computerMove();
bool checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';

    resetGameBoard();

    while (winner == ' ' && checkEmptySpaces())
    {
        printGameBoard();

        playerMove();
        if (checkWinner()) 
        {
            winner = 'O';
            break;
        }

        if (!checkEmptySpaces()) break;

        computerMove();
        if (checkWinner()) 
        {
            winner = 'X';
            break;
        }
    }

    printGameBoard();
    printWinner(winner);

    return 0;
}

void resetGameBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printGameBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", board[i][j]);
            if (j != 2) printf("|");
        }
        printf("\n");
    }
}

bool checkEmptySpaces()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ') return true;
        }
    }
    return false;
}

void playerMove()
{
    int row;
    int column;

    do 
    {
        printf("\nEnter row # (1-3): ");
        scanf("%d", &row);
        row--;

        printf("Enter column # (1-3): ");
        scanf("%d", &column);
        column--;

        if (board[row][column] != ' ')
        {
            printf("Invalid inputs. Try again...\n");
            continue;
        }
        
        board[row][column] = PLAYER;
        break;

    } while (board[row][column] != ' ');
}

void computerMove()
{
    srand(time(0));

    int row;
    int column;

    do
    {
        row = rand() % 3;
        column = rand() % 3;
    } while (board[row][column] != ' ');

    board[row][column] = COMPUTER;
}

bool checkWinner()
{
    int index = 0;
    char game_board[9];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game_board[index] = board[i][j];
            index++;
        }
    }

    if ((game_board[0] != ' ' && (game_board[0] == game_board[1] && game_board[0] == game_board[2])) ||
        (game_board[0] != ' ' && (game_board[0] == game_board[3] && game_board[0] == game_board[6])) ||
        (game_board[0] != ' ' && (game_board[0] == game_board[4] && game_board[0] == game_board[8])) ||
        (game_board[1] != ' ' && (game_board[1] == game_board[4] && game_board[1] == game_board[7])) ||
        (game_board[2] != ' ' && (game_board[2] == game_board[4] && game_board[2] == game_board[6])) ||
        (game_board[2] != ' ' && (game_board[2] == game_board[5] && game_board[2] == game_board[8])) ||
        (game_board[3] != ' ' && (game_board[3] == game_board[4] && game_board[3] == game_board[5])) ||
        (game_board[6] != ' ' && (game_board[6] == game_board[7] && game_board[6] == game_board[8]))) 
    {
        return true;
    }

    return false;
}

void printWinner(char winner)
{
    (winner == 'O') ? printf("\nPlayer Won!!") :
    (winner == 'X') ? printf("\nComputer Won...") :
                      printf("\nDraw...");
}