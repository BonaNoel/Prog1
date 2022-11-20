#include <stdio.h>

// fuggvennyel megkeresi tomb max/min-t //

int max(int tomb[], int meret)
{
    int max = tomb[0];
    for (int i = 0; i < meret; i++)
    {
        if (max < tomb[i])
        {
            max = tomb[i];
        }
    }
    return max;
}

int min(int tomb[], int meret)
{
    int min = tomb[0];
    for (int i = 0; i < meret; i++)
    {
        if (min > tomb[i])
        {
            min = tomb[i];
        }
    }
    return min;
}

int main()
{
    int tomb[] = {-13, 125, 44, -126, 450};
    int meret = sizeof(tomb) / sizeof(int);
    int mint, maxt;

    maxt = max(tomb, meret);
    mint = min(tomb, meret);

    printf("MAX: %d\nMIN: %d\n", maxt, mint);
    
    return 0;
}