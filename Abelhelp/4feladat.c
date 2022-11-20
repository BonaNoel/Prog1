#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256
#define SIZE 1024

typedef struct
{
    char irany[SIZE];
    int lepes;
} Kincs;

int main()
{
    int x = 0;
    int y = 0;

    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Hiba a fajl megnyitasa kozben.\n");
        exit(EXIT_FAILURE);
    }

    char buffer[SIZE];
    int line_counter = 0;
    char *token;

    while (fgets(buffer, SIZE, fp) != NULL)
    {
        line_counter++;
    }

    rewind(fp);

    Kincs pozicio[line_counter];

    for (int i = 0; i < line_counter; i++)
    {
        fgets(buffer, SIZE, fp);
        char *token = strtok(buffer, " ");
        strcpy(pozicio[i].irany, token);

        token = strtok(NULL, "");
        pozicio[i].lepes = atoi(token);
    }

    for (int i = 0; i < line_counter; i++)
    {
        if (strcmp(pozicio[i].irany, "jobb") == 0)
        {
            x = x + pozicio[i].lepes;
        }
        else if (strcmp(pozicio[i].irany, "ball") == 0)
        {
            x = x - pozicio[i].lepes;
        }
        else if (strcmp(pozicio[i].irany, "fel") == 0)
        {
            y = y + pozicio[i].lepes;
        }
        else if (strcmp(pozicio[i].irany, "le") == 0)
        {
            y = y - pozicio[i].lepes;
        }
    }

    printf("x: %d\ny: %d\n", x, y);

    fclose(fp);

    return EXIT_SUCCESS;
}