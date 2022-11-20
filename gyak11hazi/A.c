#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// beir 100 db random szamot numbers.txt-be //

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int main()
{
    srand(time(NULL));

    FILE *fp = fopen("numbers.txt", "w");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }


    for (int i = 0; i < 99; i++)
    {
        fprintf(fp, "%d\n", generate_random(10, 99));
    }

    fprintf(fp, "%d", generate_random(10, 99));

    fclose(fp);

    return EXIT_SUCCESS;
}