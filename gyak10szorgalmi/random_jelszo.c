#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  generál 8 - 12 hosszusagu random jelszot //
// NEM OLYAN MINT A FELADAT KERI //

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int main(void)
{
    srand(time(NULL));

    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM.,;'";

    int size = generate_random(9, 13);
    char arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%c", list[rand() % (sizeof(list) - 1)]);
    }

    puts("");

    return EXIT_SUCCESS;
}