#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// fuggveny tobb erteket ad vissza struct-al

typedef struct
{
    int min;
    int max;
    double average;
} Array_information;

int generate_random(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

Array_information array_stat(int array[9])
{
    int min = array[0];
    int max = array[0];
    double average = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }

        if (array[i] > max)
        {
            max = array[i];
        }

        sum += array[i];
    }

    average = sum / 10;

    Array_information tmp_array;
    tmp_array.min = min;
    tmp_array.max = max;
    tmp_array.average = average;

    return tmp_array;
}

int main(void)
{
    srand(time(NULL));

    Array_information final_array;

    int array[9];

    for (int i = 0; i < 10; i++)
    {
        array[i] = generate_random(10, 99);
    }

    printf("A tömb elemei:");

    for (int i = 0; i < 9; i++)
    {
        printf(" %d,", array[i]);
    }

    printf(" %d\n", array[9]);

    final_array = array_stat(array);

    printf("Legkisebb elem: %d\n", final_array.min);
    printf("Legnagyobb elem: %d\n", final_array.max);
    printf("Az elemek átlaga: %.2lf\n", final_array.average);

    return EXIT_SUCCESS;
}