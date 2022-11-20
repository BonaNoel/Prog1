#include <stdio.h>

// kiirja a relációt két szám között //

int main()
{
    int a, b;
    printf("Adj meg 2 számot:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
        printf(">\n");
    else if (a < b)
        printf("<\n");
    else
        printf("=\n");

    return 0;
}