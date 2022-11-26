#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Salaire.h"

int main(int argc, char *argv[])
{
    float heures, salairehoraire;

    printf("Nombre d'heures travaillees ?");
    scanf("%f", &heures);
    printf("Salaire par heure ?");
    scanf("%f", &salairehoraire);
    printf("%f", calculSalaire(heures, salairehoraire));

    return 0;
}

float calculSalaire(float heures, float salaireHoraire)
{
    float salaire;

    if (heures > 35)
    {
        salaire = 35 * salaireHoraire + (heures - 35) * 1.5 * salaireHoraire;
    }
    else
    {
        salaire = heures * salaireHoraire;
    }
    
    return salaire;
}