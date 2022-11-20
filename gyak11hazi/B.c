#include <stdio.h>
#include <stdlib.h>

// kiolvassa number.txt-t es kiirja az atlagat a szamoknak //

typedef struct
{
    int *elems;   // a dinamikusan lefoglalt tombre mutat
    int length;   // a betett elemek száma
    int capacity; // a tumb fizikai kapacitasa
                  // capacity >= length
} DynArray;

void mem_error_exit()
{
    fprintf(stderr, "Error: cannot allocate memory\n");
    exit(1);
}

DynArray *da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL)
    {
        mem_error_exit();
    }

    int initial_capacity = 2;

    result->elems = malloc(initial_capacity * sizeof(int));
    if (result->elems == NULL)
    {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = initial_capacity;

    return result;
}

void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = 2 * self->capacity;
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        if (self->elems == NULL)
        {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }
    //
    self->elems[self->length] = data;
    self->length += 1;
}

void *da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    //
    return NULL;
}

double da_sum(DynArray *self)
{
    double sum = 0;

    for (int i = 0; i < self->length; i++)
    {
        sum += self->elems[i];
    }

    return sum;
}

double da_average(DynArray *self)
{
    double sum = da_sum(self);

    double average = sum / (self->length);

    return average;
}

int main()
{

    DynArray *array = da_create();

    FILE *fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }

    char buffer[100];

    while (fgets(buffer, 100, fp) != NULL)
    {
        da_append(array, atoi(buffer));
    }

    fclose(fp);

    double atlag = da_average(array);

    array = da_destroy(array);

    printf("A szamok atlaga: %.2lf\n", atlag);

    return EXIT_SUCCESS;
}