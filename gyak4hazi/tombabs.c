#include <stdio.h>
#include <stdlib.h>

// kicsererli a negativokat pozitvra a tomben majd kiirja //

void tomb_abs(int tomb[], int meret)
{
    int n, absn;
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < 0)
        {
            n = tomb[i];
            absn = abs(n);
            printf("%d ", absn);
        }
        else
            printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main()
{
    int tomb[] = {-1, -42, 34, 123, -114, 12, -3};
    int meret = sizeof(tomb) / sizeof(int);

    tomb_abs(tomb, meret);

    return 0;
}