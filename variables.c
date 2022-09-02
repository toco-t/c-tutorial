#include <stdio.h>

int main() {
    int number = 123;
    float gpa = 3.4;
    char language = 'C';
    char editor[] = "VS code";

    printf("Programming in %c with %s...\n", language, editor);
    printf("Student No.%d: Average GPA is %f", number, gpa);

    return 0;
}