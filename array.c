#include <stdio.h>
#include <string.h>

int main()
{
    // regular array
    // double prices[] = {5.00, 7.25, 9.00, 12.99, 20.00};

    // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    // {
    //     printf("$%6.2lf\n", prices[i]);
    // };

    // 2D array
    // int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    // {
    //     printf("{ ");
    //     for (int j = 0; j < sizeof(numbers[0]) / sizeof(numbers[0][0]); j++)
    //     {
    //         printf("%d ", numbers[i][j]);
    //     };
    //     printf("}");
    // }

    // 2D array of strings
    char cars[][10] = {"Tesla", "Honda", "Lexus"};

    strcpy(cars[1], "Mustang");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    };

    return 0;
}