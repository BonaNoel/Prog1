#include <stdio.h>

// megállapítja hogy a szám prímszám-e //

int main()
{
    int szam, i = 2;
    printf("Adj meg egy számot: ");
    scanf("%d", &szam);

    if (szam <= 0 )
    {
        printf("Nem prím: %d\n", szam);
    }
    else
    {
        while (i < szam)
        {
            if (szam % i == 0)
            {
                printf("Ez a szám nem prím: %d\n", szam);
                return 0;
            }
            else
                ++i;
        }
        printf("Ez a szám prím: %d\n", szam);
    }
    

    return 0;
}
