#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// n*n es matrix es veletlen szamok(0-100) feltolt majd kiirat szepen rendesen

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int main()
{
    srand(2022);

    int i = 0;

    printf("Add meg a matrix dimenzioit: ");
    scanf("%d", &i);

    int matrix[i][i];

    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            matrix[j][k] = generate_random(0, 99);
        }
    }

    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("%d ", matrix[j][k]);
        }
        printf("\n");
    }
}