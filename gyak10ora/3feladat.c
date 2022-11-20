#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// erős jelszó  fuggvennyel majd fajlba iras

// ha write helyett appendre teszed elvileg  vegig bekellene irnia (not tested)

bool strongnesss(char password[], int size)
{
    bool lower = false;
    bool upper = false;
    bool digit = false;

    if (size < 9)
    {
        printf("gyenge jelszo\n\n");
        return false;
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
        return true;
    }
    else
        printf("gyenge jelszo\n\n");
    return false;
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
        if ((strongnesss(password, size)) == true)
        {
            FILE *fp = fopen("third_file.txt", "w");

            if (fp == NULL)
            {
                printf("///HIBA///\n");
            }

            fprintf(fp, "%s\n", password);

            fclose(fp);
        }
    }

    return EXIT_SUCCESS;
}