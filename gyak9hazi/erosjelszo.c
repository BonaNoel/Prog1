#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// erős jelszó  fuggvennyel

void strongnesss(char password[], int size)
{
    bool lower = false;
    bool upper = false;
    bool digit = false;

    if (size < 9)
    {
        printf("gyenge jelszo\n\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (islower(password[i]) != 0)
            lower = true;
        if (isupper(password[i]) != 0)
            upper = true;
        if (isdigit(password[i]) != 0)
            digit = true;
    }

    if (lower == true && upper == true && digit && true)
    {
        printf("eros jelszo\n\n");
    }
    else
        printf("gyenge jelszo\n\n");
}

int main(void)
{
    printf("Adj meg jelszavakat '*' vegjelig!\n");

    int size = 1;
    char password[size];

    while (1)
    {
        printf("jelszo:");
        scanf("%s", password);
        size = strlen(password);

        if (password[size - 1] == '*')
        {
            break;
        }

        strongnesss(password, size);
    }

    return EXIT_SUCCESS;
}