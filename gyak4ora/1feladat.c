#include <stdio.h>

// tomb kiiratasa //

void kiir(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d\n", tomb[i]);
    }
}

int main()
{
    int tomb[5] = {1, 2, 3, 4, 5};
    int meret = 5;

    kiir(meret, tomb);


    return 0;
}