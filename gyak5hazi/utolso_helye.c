#include <stdio.h>
#include <string.h>

// Az s alapsztringben keressük a c karakter utolsó előfordulásának a helyét. //
// Visszatérési érték: a c utolsó előfordulásának az indexe az s-ben. //
// Ha nincs benne: -1 a visszatérési érték. //

int rfind_char(char s[], char c)
{
    int index = -1;
    int lenght = strlen(s);

    for (int i = 0; i < lenght; i++)
    {
        if (s[i] == c)
        {
            index = i;
        }
    }

    return index;
}

int main()
{
    int result;

    result = rfind_char("Abba", 'a');

    printf("%d\n", result);

    return 0;
}