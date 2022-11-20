#include <stdio.h>

// tomb sum meg atlag de atlag nem jo megkell nezni //

int sum(int tomb[], int meret)
{
    int osszeg = 0;
    for (int i = 0; i < meret ; i++)
    {
        osszeg = osszeg + tomb[i];
    }
    return osszeg;
}

double atlag(int tomb[],int meret)
{
    double atl;
    int foo;
    for (int i = 0; i < meret; i++)
    {
        foo += tomb[i];
    }
    atl = foo / meret;
    return atl;
}

int main()
{
    int tomb[4] = {3, 5, 10, 4};
    int osszeg;
    double atl;
    int meret = 4;
    osszeg = sum(tomb, meret);
    printf("%d\n", osszeg);
    atl = atlag(tomb, meret);
    printf("%lf\n", atl);
    return 0;
}