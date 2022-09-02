#include <stdio.h>

struct Footballer
{
    char name[15];
    int number;
};

int main()
{
    struct Footballer salah = {"Salah", 11};
    struct Footballer firmino = {"Firmino", 9};
    struct Footballer vandjik = {"Van Djik", 4};

    struct Footballer liverpool[] = {salah, firmino, vandjik};

    for (int i = 0; i < sizeof(liverpool) / sizeof(liverpool[0]); i++)
    {
        printf("%-10s: No.%d\n", liverpool[i].name, liverpool[i].number);
    }
  
    return 0;
}