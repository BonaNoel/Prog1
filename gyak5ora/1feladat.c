#include <stdio.h>
#include <string.h>

// megnézi palindrom-e a string//

int Palindrom(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    int eredmeny;

    while (j > i)
    {
        if (str[i++] != str[j--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char tomb[] = "sebes";

    if (Palindrom(tomb))
    {
        printf("palindrom\n");
    }
    else
    {
        printf("nem palindrom\n");
    }

    return 0;
}