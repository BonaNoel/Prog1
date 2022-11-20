#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fisher-Yates fele modern keveres egy tombon //

// Durstenfeld's shuffle algorithm
// helyben módosít

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

void shuffle(int n, int tomb[])
{
    int tmp = 0;
    int j = 0;

    int size = n - 1;

    for (int i = 0; i < n; i++)
    {
        j = generate_random(0, size);

        tmp = tomb[j];
        tomb[j] = tomb[i];
        tomb[i] = tmp;

        size--;
    }
}

int main(void)
{
    srand(time(NULL));

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    shuffle(size, arr);

    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d\n", arr[size - 1]);

    return EXIT_SUCCESS;
}