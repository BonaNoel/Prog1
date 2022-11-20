#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// veletlen szeruen kivalaszaszt egy elemet a tombol (felteve hogy nem ures) fugvennyel //

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int choice(const int n, const int tomb[])
{
    int index = generate_random(0, n - 1);

    return tomb[index];
}

int main(void)
{
    srand(time(NULL));

    int arr[] = {21, 11, 54, 22, 66, 123, 94, 1, 5, 7};
    int size = sizeof(arr) / sizeof(arr[1]);

    int random_elem = choice(size, arr);

    printf("%d\n", random_elem);

    return EXIT_SUCCESS;
}