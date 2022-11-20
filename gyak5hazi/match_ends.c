#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aab", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

int match_ends(int n, char words[][3])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int lenght = strlen(words[i]);

        if (words[i][0] == words[i][lenght - 1] && lenght > 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char szavak1[][3] = {"aab", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 4;

    int result;
    result = match_ends(szavak1_meret, szavak1);
    printf("%d\n", result);

    return 0;
}