#include <stdio.h>

// háromszöget ir #-el csak visszafele //

int main()
{
    int a, b = 1;
    printf("Adj meg egy szamot: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

// nem JÓÓÓÓÓ //