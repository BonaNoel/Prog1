#include <stdio.h>

// 4-gyel osztható számokat kiirja amig megaadtuk //

int main()
{
    int a, i;
    printf("Adj meg egy szamot: ");
    scanf("%d", &a);

    for (i = 0; i <= a; ++i)
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}