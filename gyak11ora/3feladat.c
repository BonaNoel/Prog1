#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
#define MAX 128

// felhasznalotol 5 db stringet beker es rendezi  QSORT//

void print_array(int size, char *array[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%s ", array[i]);
    }

    printf("\n");
}

int compare_string(const void *a, const void *b)
{
    char *pa = *(char **)a;
    char *pb = *(char **)b;

    return strcmp(pa, pb);
}

int main(void)
{
    char *strings[SIZE];


    printf("Adj meg 5 db szot  enterr-el elvalasztva:\n");

    for (int i = 0; i < SIZE; i++)
    {
        strings[i] = malloc(MAX * sizeof(char));
        scanf("%128s", strings[i]);
    }

    printf("A tömb elemei:");
    print_array(SIZE, strings);

    qsort(strings, SIZE, sizeof(strings[0]), compare_string);

    printf("A tomb elemei rendezes utan:");
    print_array(SIZE, strings);

    free(*strings);

    return EXIT_SUCCESS;
}