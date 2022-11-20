#include <stdio.h>

/* Fahrenheit-fok-Celsius-fok átszámítási táblázat */

#define ALSO 0
#define FELSO 300
#define LEPES 20

int main()
{
    int fahr;

    for (fahr = ALSO; fahr <= FELSO; fahr = fahr + LEPES)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
