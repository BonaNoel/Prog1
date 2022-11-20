#include <stdio.h>

// kiirja eljarassal tombot vesszovel meg space-el elvalasztva //

void kiir(int tomb[], int meret)
{
    for (int i = 0; i < meret - 1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d", tomb[meret - 1]);
    printf("\n");
}

int main()
{
    int tomb[] = {1, 12, -420, 99, 26, 4};
    int meret;

    meret = sizeof(tomb) / sizeof(int);
    kiir(tomb, meret);

    return 0;
}