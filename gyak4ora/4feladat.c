#include <stdio.h>
#include <stdbool.h>

// igaz-hamis ha tartalmazza a tomb //

bool benne(int tomb[], int meret, int szam)
{
    for (int i = 0; i < meret; i++)
    {
        if (szam == tomb[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int szam, a;
    int tomb[5] = {1, 2, 3, 4, 5};
    int meret = 5;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);
    a = benne(tomb, meret, szam);
    if (a)
    {
        printf("A szam benne van\n");
    }
    else
        printf("A szam nincs benne\n");
}