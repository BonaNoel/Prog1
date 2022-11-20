#include <stdio.h>

// bekér 2 számot meg egy aritmetikai műveletet //

int main()
{

    int a, b, eredmeny;
    char jel;
    printf("Adj meg 2 számot is egy jelet: ");
    scanf("%d %d %c", &a, &b, &jel);

    if (jel == '+')
    {
        eredmeny = a + b;
        printf("%d\n", eredmeny);
    }

    else if (jel == '-')
    {
        eredmeny = a - b;
        printf("%d\n", eredmeny);
    }

    else if (jel == '*')
    {
        eredmeny = a * b;
        printf("%d\n", eredmeny);
    }

    else if (jel == '/')
    {
        eredmeny = a / b;
        printf("%d\n", eredmeny);
    }

    else if (jel == '%')
    {
        eredmeny = a % b;
        printf("%d\n", eredmeny);
    }

    return 0;
}
