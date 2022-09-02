#include <stdio.h>

int main()
{
    // create a file
    // FILE *ptrF = fopen("/Users/toco/Desktop/test.txt", "w");

    // fprintf(ptrF, "Testing...");

    // fclose(ptrF);

    // delete a file
    // remove("/Users/toco/Desktop/test.txt") == 0 ? printf("Deleted successfully...") : printf("The file doesn't exist...");

    // read a file
    FILE *ptrF = fopen("/Users/toco/Desktop/text.txt", "r");
    char buffer[255]; // hold a one line of a file at a time

    if (ptrF == NULL)
    {
        printf("The file doesn't exist...");
    }
    else
    {
        while (fgets(buffer, 255, ptrF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(ptrF);

    return 0;
}