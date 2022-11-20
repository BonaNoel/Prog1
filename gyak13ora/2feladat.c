#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// szemely struktura fajlbol nev age SEX  token elvalaszt szoköz es rendez min a 3 felekepp qsort person.csv

typedef struct
{
    char name[102];
    int age;
    char sex;
} Person;

int compare_struct(const void *a, const void *b)
{
    Person a_person = *(Person *)a;
    Person b_person = *(Person *)b;

    if (a_person.sex - b_person.sex > 0)
    {
        return 1;
    }
    else if (a_person.sex - b_person.sex < 0)
    {
        return -1;
    }
    else
    {
        return strcmp(a_person.name, b_person.name);
    }
}

int main()
{

    int person_number = 0;

    FILE *fp = fopen("person.csv", "r");

    if (fp == NULL)
    {
        printf("///HIBA///\n");
    }

    char buffer[100];

    while (fgets(buffer, 100, fp) != NULL) // hany ember van
    {
        person_number++;
    }

    Person ember[person_number];

    rewind(fp); // visszaalitjuk fp mutatojat a afajl elejere

    char *token;
    int index = 0;
    while (fgets(buffer, 100, fp) != NULL)
    {

        token = strtok(buffer, " ");

        strcpy(ember[index].name, buffer); // nev beirasa

        token = strtok(NULL, " ");
        ember[index].age = atoi(buffer); // ev beiras

        token = strtok(NULL, ""); // sex beirasa
        ember[index].sex = buffer[0];

        index++;
    }

    for (int i = 0; i < index; i++)
    {
        printf("%s (%d) %c\n", ember[i].name, ember[i].age, ember[i].sex);
    }

    puts("--------------");

    qsort(ember, person_number, sizeof(Person), compare_struct);

    for (int i = 0; i < index; i++)
    {
        printf("%s (%d) %c\n", ember[i].name, ember[i].age, ember[i].sex);
    }

    fclose(fp);
}