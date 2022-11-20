#include <stdio.h>
#include <string.h>

// benne van-e a keresett betu a stringbe//

void benne(char tomb[], char betu)
{
    int meret = strlen(tomb);
    int eredmeny, index;
    for (int i = 0; i < meret; i++)
    {
        if (betu == tomb[i])
        {
            eredmeny = 1;
            index = i;
            break;
        }
        else
        {
            eredmeny = 0;
            index = -1;
        }
    }
}

int main()
{
    char str[] = "abcdef";
    char betu = 'b';
    benne(str,betu);
    printf("%d    %d\n", eredmeny, index);


    return 0;
}