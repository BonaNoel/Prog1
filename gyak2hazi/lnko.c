#include <stdio.h>

// 2 szám legnagyobb kozos osztolyát kiszamolja //

int main()
{
    int a, b;
    printf("Add meg az első számot: \n");
    scanf("%d", &a);

    printf("Add meg a másik számot: \n");
    scanf("%d", &b);

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    printf("A 2 szám legnagyobb közös osztója: %d\n", a);

    return 0;
}