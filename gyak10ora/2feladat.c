#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// megszamolja hany sor van a fajlba 

// SOROK SZAMA FUGGVENYNEK JO LENNE 

int main(void)
{

    FILE *fp = fopen("second_file.txt", "w");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);

    FILE *fp2 = fopen("second_file.txt", "r");

    if (fp2 == NULL)
    {
        printf("///HIBA///\n");
    }

    char buffer[100];
    int count = 0;

    while (fgets(buffer, 100, fp2) != NULL)
    {
        count++;
    }

    printf("%d\n", count);

    fclose(fp2);

    return EXIT_SUCCESS;
}