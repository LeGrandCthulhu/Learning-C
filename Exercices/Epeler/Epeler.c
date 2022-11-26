#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Epeler.h"

int main(int argc, char *argv[])
{
    char motAEpeler[100];
    unsigned int tailleMot;
    
    printf("Quel mot a epeler ?");
    scanf("%s", motAEpeler);
    printf("Quel est le nombre de lettre ?");
    scanf("%u", &tailleMot);
    epeler(motAEpeler, tailleMot);

    return 0;
}

void epeler(char motAEpeler[], unsigned int tailleMot)
{
    for (int i = 0; i < tailleMot; i++)
    {
        printf("%c\n", motAEpeler[i]);
    }
    
}

// Je pense peut être améliorer