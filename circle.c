#include <stdio.h>
#include <math.h>

int main() {

    const double PI = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The circumference of the circle is %lf.", circumference);

    return 0;
}