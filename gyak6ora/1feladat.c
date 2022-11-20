#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random( int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int main()
{
    int eredmeny; 
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", generate_random(0, 90));
    }
    
}