#include <stdio.h>
#include <string.h>

// Az s sztringben a c karakter hányszor fordul elő? //

int char_count(char s[], char c)
{
    int count = 0;
    int lenght = strlen(s);

    for (int i = 0; i < lenght; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    int result;

    result = char_count("kecske", 'e');

    printf("%d\n", result);

    return 0;
}