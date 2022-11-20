#include <stdio.h>
#include <math.h>

// kiirja a gomb felszinet es terfogatat fuggvennyel //

double felszin(double n)
{
    double eredmenyf = 4 * M_PI * n * n;
    return eredmenyf;
}

double terfogat(double n)
{
    double eredmenyt = (4 * M_PI * n * n * n) / 3;
    return eredmenyt;
}

int main()
{
    double sugar, fel, ter;
    printf("Add meg a gomb sugarat: ");

    while (1)
    {
        scanf("%lf", &sugar);
        if (sugar <= 0)
        {
            printf("//HIBA//\nAdd meg a gomb sugarat: ");
        }
        else
        {
            fel = felszin(sugar);
            ter = terfogat(sugar);
            printf("A gomb felszine: %.3lf\nA gomb terfogata: %.3lf\n", fel, ter);
            break;
        }
    }

    return 0;
}