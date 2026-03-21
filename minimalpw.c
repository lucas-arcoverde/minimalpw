#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_PASSWORD_LEN 100

int main(int argc, char * argv[])
{
    char password[MAX_PASSWORD_LEN];
    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

    int password_len;

    if (argc == 1)
        password_len = 12;
    else
        password_len = atoi(argv[1]);

    srand(time(NULL));

    for (int i = 0; i < password_len; i++)
    {
        int random_index = rand() % (sizeof(chars) - 1);
        password[i] = chars[random_index];
    }

    printf("Generated password: %s\n", password);

    return 0;
}

