#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// lottos feladat // kulonbozo legyenek a szamok mindig

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}


int main(void)
{
    srand(time(NULL));

    int size = 0;
    int low = 0;
    int upp = 0;

    printf("Hany darab random szamot kersz?\n");
    scanf("%d", &size);

    printf("Also hatar: ");
    scanf("%d", &low);

    printf("Felso hatar: ");
    scanf("%d", &upp);

    int array [size -1];

    for (int i = 0; i < size; i++)
    {
        array[i] = generate_random(low, upp);
        printf("%d ", array[i]);
    }
    puts("");
    
    

    return EXIT_SUCCESS;
}