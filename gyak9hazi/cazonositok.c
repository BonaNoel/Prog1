#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// c azonositos feladat WWWW work in progress WWWW SCANF HIBA NEM OLVAS \n nem ismeri fel a fuggveny

int is_valid_c_identifier(const char *input)
{
    int size = strlen(input);

    int valid = false;

    printf("%d\n", size);
    if (size < 1 || *input == '\n')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(void)
{
    printf("Adj meg sztringeket '*' vegjelig!\n");

    int size = 1;
    char input[size];

    int result = false;

    while (1)
    {
        printf("Input:");
        scanf("%s\n", input);

        size = strlen(input);


        if (input[size - 1] == '*')
        {
            break;
        }

        result = is_valid_c_identifier(input);

        if (result == true)
        {
            printf("YES\n\n");
        }
        else if (result == false)
        {
            printf("NO\n\n");
        }
    }

    return EXIT_SUCCESS;
}