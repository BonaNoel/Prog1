#include <stdio.h>

// diamond patternt nyom a terminalba //

int main()
{
    int sor, darab, space;
    printf("Ajd meg egy paratlan egesz szamot: ");
    while (1)
    {
        scanf("%d", &sor);
        if (sor < 0 || sor % 2 == 0) // hiba ha a szám páros/0/vagy negatív //
        {
            printf("//HIBA//\n");
            break;
        }
        else
        {
            // ELSO FELE //
            darab = 1;
            space = sor / 2;
            for (int i = 0; i < (sor + 1) / 2; i++)
            {
                for (int j = 0; j < space; j++) // space csokken //
                {
                    printf(" ");
                }
                space--;
                for (int k = 0; k < darab; k++) // csillagok szama no//
                {
                    printf("*");
                }
                darab += 2;
                printf("\n");
            }

            // MASODIK FELE //
            darab = sor - 2;
            space = 1;
            for (int i = 0; i < sor / 2; i++)
            {
                for (int j = 0; j < space; j++) // space no //
                {
                    printf(" ");
                }
                space++;
                for (int k = 0; k < darab; k++) // csillag csokken //
                {
                    printf("*");
                }
                darab -= 2;
                printf("\n");
            }
            return 0;
        }
    }
}