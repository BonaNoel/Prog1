#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *double_digits(const char *original)
{
    char *tmp;
    char *array;

    strcpy(tmp, original);

    for (int i = 0; i < 100; i++)
    {
        if (tmp[i] = '\0')
        {
            break;
        }
        else if (isdigit(tmp[i]) != 0)
        {
            array[i] = tmp[i];
            array[i + 1] = tmp[i];
        }
        else
        {
            array[i] = tmp[i];
        }
    }

    return array;
}

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Hibas parameterezes!\n");
        exit(1);
    }
    else
    {
        char const *value = argv[1];

        printf("%s\n",double_digits(value));
    }



    return 0;
}
