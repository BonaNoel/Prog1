#include <stdio.h>
#include <stdlib.h>

// 2^1024-en szamjegyeinek kulonbsegenek osszege (helyes emgoldas: 983) //

int felhokarcolo(char szam[], int meret)
{
    int j, kulonbseg;
    int eredmeny = 0;

    for (int i = 0; i < meret - 2; i++)
    {
        j = i + 1;
        kulonbseg = abs(szam[j] - szam[i]);
        eredmeny += kulonbseg;
    }

    return eredmeny;
}

int main()
{
    char szam[] = "1797693134862315907729305190789024733617976978942306572734300811577326758055009631327084"
                  "7732240753602112011387987139335765878976881441662249284743063947412437776789342486548527630221960124609"
                  "4119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137216";
    int meret = sizeof(szam);
    int eredmeny;

    eredmeny = felhokarcolo(szam, meret);

    printf("%d\n", eredmeny);
    return 0;
}