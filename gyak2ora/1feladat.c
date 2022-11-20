#include <stdio.h>

// összedja a szamokat amig irjuk plusz megszamlalja a poz neg-ekete //

int main()
{
    int poz = 0, neg = 0, sum = 0;
    int a;
    printf("Adj meg egy számot (0-val lépsz ki): ");

    do
    {

        scanf("%d", &a);
        sum += a;

        if (a > 0)
            ++poz;
        else if (a < 0)
            ++neg;

    } while (a != 0);

    printf("%d\n", sum);
    printf("poz: %d   neg: %d\n", poz, neg);

    return 0;
}