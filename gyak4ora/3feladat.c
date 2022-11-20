#include <stdio.h>
#include <stdbool.h>

// igaz-hamis hogy tomb palindrom: 12321... //

bool palindrom(int tomb[], int meret)
{
    for (int i = 0; i < meret; i++)
    {
        for (int j = meret - 1; j > i; j--)
        {
            if (tomb[i] != tomb[j])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}

int main()
{
    int tomb[5] = {1,2,3,2,1};
    int meret = 5;
    int a;
    a = palindrom(tomb, meret);
    if (a)
    {
        printf("A tomb palindrom\n");
    }
    else
        printf("A tomb nem palindrom\n");

    return 0;
}