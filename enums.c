#include <stdio.h>

enum Day {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

int main()
{
    enum Day today = Sun;

    printf("\nToday is %s! ", today == Sun || today == Sat ? "weekend" : "weekday");

    return 0;
}