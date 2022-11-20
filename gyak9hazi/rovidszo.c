#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// kiirja a legrovidebb szavakat sorrendbe 

int main(int argc, char const *argv[])
{
    int size = 0;
    int min = 0;
    

    if(argc == 1)
    {
        printf("Nem adtal meg egyetlen szot sem!\n");
        return EXIT_FAILURE;
    }
    else if (argc == 2)
    {
        printf("%s\n", argv[1]);
    }
    else
    {
        for (int i = 1; i < argc - 1; i++)
        {
            if(strlen(argv[i]) < strlen(argv[i + 1]))
            {
                printf("%s\n", argv[i]);
            }
            else if(strlen(argv[i]) == strlen(argv[i + 1]))
            {
                printf("%s\n", argv[i]);
                printf("%s\n", argv[i + 1]);
            }
            else
            {
                printf("%s\n", argv[i + 1]);
            }
        }
        
    }

    return EXIT_SUCCESS;
}
