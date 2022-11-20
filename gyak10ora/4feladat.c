#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// elore beirt szamok osszege

// n pontos merete helyett ide jo lehet a sorokat szamlalo fuggveny (2feladat.c)

int main(void)
{

    FILE *fp = fopen("fourth_file.txt", "r");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }

    int n[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        fscanf(fp, "%d", &n[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += n[i];
    }

    printf("%d\n", sum);

    fclose(fp);

    return EXIT_SUCCESS;
}