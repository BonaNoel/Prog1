#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

// string tokenizacio  (elvalasztja megadott dolgokkent strtok) //

int main(void)
{
    char string[MAX];

    printf("Adj meg szavakat szokozzel elvalasztva: ");

    fgets(string, MAX, stdin);
    string[strlen(string) - 1] = '\0'; // AZ UTOLSO ENTERT LEVESZI ES ODA TESZI A STRING NULLAT (fgets beolvassa az utolso entertn(\n))

    char *token;

    token = strtok(string, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return EXIT_SUCCESS;
}