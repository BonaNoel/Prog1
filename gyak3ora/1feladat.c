#include <stdio.h>

// háromszögeket ír #-el //

int main()
{
    int a, b = 1;
    printf("Adj meg egy szamot: ");
    scanf("%d", &a);

    while (b <= a)
    {
        for (int i = 1; i <= b; ++i)
        {
            printf("#");
        }
        printf("\n");
        ++b;
    }
    return 0;
}