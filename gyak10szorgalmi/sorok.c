#include <stdio.h>
#include <stdlib.h>

//  argumentumbol kapott txt-t olvas es kiirja a sorok szamat fuggvennyel //

int get_number_of_lines(FILE *fpt)
{
    char buffer[100];
    int count = 0;

    while (fgets(buffer, 100, fpt) != NULL)
    {
        count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int counter = 0;

    if (argc != 2)
    {
        printf("Hiba! Adja meg egy szoveges allomany nevet!\n");
        return EXIT_FAILURE;
    }
    else
    {
        FILE *fp = fopen(argv[1], "r");

        if (fp == NULL)
        {
            printf("Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
            return EXIT_FAILURE;
        }

        counter = get_number_of_lines(fp);

        fclose(fp);

        printf("%d\n", counter);
    }

    return EXIT_SUCCESS;
}
