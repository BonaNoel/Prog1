#include <stdio.h>

// haromszog oda-vissza //

int main()
{
    int sor, darab1, darab2, space;
    printf("Adj meg egy egesz pozitiv szamot: ");
    
    while (1)
    {
        scanf("%d", &sor);
        if (sor <= 0)
        {
            printf("//HIBA//\n Adj meg egy szamot: ");
        }
        else
        {
            space = sor -1;
            darab1 = 1;
            darab2 = 1;
            for (int i = 0; i < sor; i++)
            {
                for (int j = 0; j < space; j++) // space szama //
                {
                    printf(" ");
                }
                space--;
                for (int k = 0; k < darab1; k++) // # szama //
                {
                    printf("#");
                }
                darab1++;
                for (int l = 0; l < 2; l++) // 2 db space kozte //
                {
                    printf("  ");
                }
                for (int m = 0; m < darab2; m++) // jobboldali #-ek //
                {
                    printf("#");
                }
                darab2++;
                printf("\n");

            }
            
            return 0;
        }
    }
    
}