#include <stdio.h>

// függvény hogy prím szám-e //

int prim(int n)
{
    int i = 2;
    if (n <= 0)
    {
        return 1;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                return 1;
            }
            else
                ++i;
        }
        return 2;
    }
}

int main()
{
    int a, eredmeny;
    printf("Adj meg egy szamot:  ");
    scanf("%d", &a);

    eredmeny = prim(a);
    if (eredmeny == 1)
    {
        printf("Ez a szam nem prim\n");
    }
    else
        printf("Eza a szam prim\n");

    return 0;
}