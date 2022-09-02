#include <stdio.h>

void greetings(char [], int);

int main() {

    char name[] = "Toco";
    int date = 31;

    greetings(name, date);

    return 0;
}

void greetings(char name[], int date) {
    printf("Hey %s, today is August %dst...", name, date);
}