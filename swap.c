#include <stdio.h>
#include <string.h>

int main()
{
    char host[10] = "Beer";
    char guest[10] = "Water";
    char storage[10];

    strcpy(storage, host);
    strcpy(host, guest);
    strcpy(guest, storage);

    printf("Host: %s, Guest: %s ", host, guest);

    return 0;
}