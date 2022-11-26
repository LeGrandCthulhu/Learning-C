#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pair(int nombre);
 
int main(int argc, char *argv[])
{
    int repetitions;

    printf("Nombre de répétitions ?\n");
    scanf("%d", &repetitions);

    for (int i = 0; i < repetitions; i++)
    {
        if (pair(i))
        {
            printf("%d est un nombre pair.\n", i);
        }
        else
        {
            printf("%d est un nombre impair\n", i);
        }
        
    }
    
       
    return 0;
}

int pair(int nombre)
{
    int estPair = 0;

    if (nombre % 2 == 0)
    {
        estPair = 1;
    }
    
    return estPair;
}