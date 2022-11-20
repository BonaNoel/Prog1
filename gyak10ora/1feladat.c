#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// irunk es kiolvasun fajlbol

int main(void)
{

    FILE *fp = fopen("first_file.txt", "w");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }

    fprintf(fp, "Ye egy cicus\n");

    fclose(fp);

    FILE *fp2 = fopen("first_file.txt", "r");

    if (fp2 == NULL)
    {
        printf("///HIBA///\n");
    }

    char buffer[100];

    fgets(buffer, 100, fp2);

    printf("%s", buffer);

    fclose(fp2);

    return EXIT_SUCCESS;
}