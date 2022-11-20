#include <stdio.h>
#include <stdlib.h>

int random_number_generator(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

void transzponal(int original[6][8], int transzponalt[8][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; i < 8; i++)
        {
            transzponalt[j][i] = original[i][j];
        }
    }
}

void kiir(int row, int column, int matrix[row][column], int transzponalis[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n---\n\n");

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d  ", transzponalis[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    srand(1986);

    int matrix_68[6][8];
    int transzponalt_86[8][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            matrix_68[i][j] = random_number_generator(21, 37);
        }
    }

    transzponal(matrix_68, transzponalt_86);

    kiir(6, 8, matrix_68, transzponalt_86);

    return EXIT_SUCCESS;
}