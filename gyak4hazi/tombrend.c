#include <stdio.h>

// megnezi rendezett-e a tomb //

int rendezz(int tomb[], int meret)
{
    int j, vege;

    if (meret == 0 || meret == 1)
    {
        vege = 1;
    }
    else
    {
        for (int i = 0; i < meret; i++)
        {
            j = i + 1;
            if (tomb[j] >= tomb[i])
            {
                vege = 1;
            }
            else
            {
                vege = 0;
                break;
            }
        }
    }

    return vege;
}

int main()
{
    int tomb[] = {13, -4, 32, 42};
    int meret = sizeof(tomb) / sizeof(int);
    int eredmeny = rendezz(tomb, meret);

    if (eredmeny)
    {
        printf("Ez a tomb rendezett\n");
    }
    else
        printf("Ez a tomb nem rendezett\n");

    return 0;
}