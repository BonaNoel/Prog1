#include <stdio.h>
#include <stdbool.h>

// megnezi hogy a haromszog megszerkeztheto-e //

bool valid_triangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    double a, b, c;
    bool eredmeny;

    printf("Add meg a haromszog oldalait: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    eredmeny = valid_triangle(a, b, c);
    
    if (eredmeny)
        printf("A haromszog megszerkeztheto\n");
    else
        printf("A haromszog nem szerkeztheto meg\n");

    return 0;
}