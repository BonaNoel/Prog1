#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int squareM(int n, int A[n][n]);

int main()
{
    int n;
    int A[n][n];
    printf("Adja meg a matrix dimenziojat: ");
    scanf("%d", &n);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand()%100000;
        }
        
    }
    FILE *fp = fopen("matrix.txt", "w");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(fp, "%d", A[i][j]);
        }
        
    }
    fclose(fp);
    FILE *kp = fopen("matrix.txt", "r");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(kp, "%d", A[i][j]);
        }
        
    }
    squareM(n, A[n][n]);
    fclose(kp);
    return 0;
}

int squareM(int n, int A[n][n])
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (A[i][j] != 0)
                {
                    a++;
                }   
            }   
        }
    }
    if (a > 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}