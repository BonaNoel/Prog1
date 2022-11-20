#include <stdio.h>

#define MAX 1000

//  szamjegyek osszege

int main()
{
    char numbers[MAX];
    int size = 0;

    printf("Szam: ");
    scanf("%s%n", numbers, &size);

    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result = result + (numbers[i] - '0');
    }

    printf("A számjegyek összege: %d\n", result);

    return 0;
}