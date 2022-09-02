#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\n(F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f...", temp);
    }
    else if (unit == 'F') {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius: %.1f...", temp);
    }
    else {
        printf("\n%c is an invalid input...", unit);
    }

    return 0;
}