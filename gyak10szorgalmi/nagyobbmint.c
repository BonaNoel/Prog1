#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// in.txt faljbol a 0.5-nel nagyobbakat beirja out.txt fajlba //

int main(void)
{

    FILE *fp = fopen("in.txt", "r");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("# in.txt sikeresen megnyitva\n");
    }

    FILE *fp2 = fopen("out.txt", "a");

    if (fp2 == NULL)
    {
        printf("///HIBA///\n");
        return EXIT_FAILURE;
    }

    char buffer[50];
    double tmp = 0;

    int counter = 0;

    printf("# 0,5-nel nagyobb számok szűrése...\n");

    while (fgets(buffer, 50, fp) != NULL)
    {
        tmp = atof(buffer);

        if (tmp >= 0.5)
        {
            fprintf(fp2, "%lf\n", tmp);
            counter++;
        }

        tmp = 0;
    }

    printf("# szures vege\n");

    fclose(fp);

    fclose(fp2);

    printf("# out.txt bezarva\n");

    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", counter);

    return EXIT_SUCCESS;
}