#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5

// felhasznalotol 5 db szamot beker es rendezi  QSORT//

void print_array(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }

    printf("\n");
}

int compare_int(const void *a, const void *b)
{
    int a_value = *(int *)a;
    int b_value = *(int *)b;

    return a_value - b_value;
}

int main(void)
{
    int numbers[SIZE];

    printf("Adjm eg 5 db szamot enterr-el elvalasztva:\n");

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d ", &numbers[i]);
    }

    printf("A tömb elemei:");
    print_array(SIZE, numbers);

    qsort(numbers, SIZE, sizeof(numbers[0]), compare_int);

    printf("A tomb elemei rendezes utan:");
    print_array(SIZE, numbers);

    return EXIT_SUCCESS;
}
