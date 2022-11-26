#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Somme_Carres.h"

int main(int argc, char *argv[])
{
    int n;

    printf("Combien de carres a sommer ?\n");
    scanf("%d", &n);
    printf("La somme des %d premiers entiers est egal a %d.\n", n, sommeCarres(n));

    return 0;
}

int sommeCarres(int n)
{
    int somme = 0;

    for (int i = 1; i <= n; i++)
    {
        somme += pow(i, 2);
    }

    return somme;
    
}