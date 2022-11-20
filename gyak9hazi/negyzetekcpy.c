#include <stdio.h>
#include <math.h>

// elso 100 szam negyzetosszeg es osszegek negyzetenek kullonbsege

int negyzetosszeg(int n)
{
    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += pow(i, 2);
    }

    return result;
}

int osszegegeknegyzete(int n)
{
    int result = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    result = pow(sum, 2);
    return result;
}

int main()
{
    int number = 100;
    int result1 = negyzetosszeg(number);
    int result2 = osszegegeknegyzete(number);
    int final = 0;

    printf("%d        %d\n", result1, result2);

    final = result2 - result1;
    printf("%d\n", final);

    return 0;
}