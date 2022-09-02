#include <stdio.h>

int main() {

    char operator;
    double first_operand;
    double second_operand;
    double result;

    printf("\n(+) (-) (*) (/): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &first_operand);

    printf("Enter the second number: ");
    scanf("%lf", &second_operand);

    switch (operator) {
        case '+':
            result = first_operand + second_operand;
            printf("\n%.2lf %c %.2lf = %.2lf", first_operand, operator, second_operand, result);
            break;
        case '-':
            result = first_operand - second_operand;
            printf("\n%.2lf %c %.2lf = %.2lf", first_operand, operator, second_operand, result);
            break;
        case '*':
            result = first_operand * second_operand;
            printf("\n%.2lf %c %.2lf = %.2lf", first_operand, operator, second_operand, result);
            break;
        case '/':
            result = first_operand / second_operand;
            printf("\n%.2lf %c %.2lf = %.2lf", first_operand, operator, second_operand, result);
            break;
        default:
            printf("\n%c is not a valid operator...", operator);
    }


    return 0;
}