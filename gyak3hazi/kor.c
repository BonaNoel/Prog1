#include <stdio.h>
#include <math.h>

// kör terület kerület függvénnyel //

double kerulet(int n)
{
    double eredmenyk = M_PI * 2 * n;
    return eredmenyk;
}

double terulet(int n)
{
    double eredmenyt = M_PI * n * n;
    return eredmenyt;
}

int main()
{
    int sugar;
    double ker, ter;
    printf("Add meg a kor sugarat: ");

    while (1)
    {
        scanf("%d", &sugar);

        if (sugar <= 0)
        {
            printf("//HIBA//\nAdd meg a kor sugarat: ");
        }
        else
        {
            ker = kerulet(sugar);
            ter = terulet(sugar);
            printf("A kor kerulete: %.3lf\nA kor terulete: %.3lf\n", ker, ter);
            break;
        }
    }
    return 0;
}
