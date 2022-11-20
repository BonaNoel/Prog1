#include <stdio.h>

// visszafele kiirja a páratlan számokat //

int main()
{
    int a, i;
    printf("Adj meg egy számot: ");
    scanf("%d", &a);

    for (i = a; i > 0; --i)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}