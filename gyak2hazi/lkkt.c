#include <stdio.h>

// 2 szám legkisseb közös töbszöröse kiszámítása az lnko val //
// lkkt =  (a * b) / lnko || az lnko-t meg functionbe tettem az előző feladatból //

int LNKO(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main()
{
    int a, b, lkkt;
    printf("Add meg az első számot: \n");
    scanf("%d", &a);

    printf("Add meg a másik számot: \n");
    scanf("%d", &b);

    lkkt = (a * b) / LNKO(a, b);
    printf("A 2 szám legkissebb közös töbszöröse: %d\n", lkkt);

    return 0;
}