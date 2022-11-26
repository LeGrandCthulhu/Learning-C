#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "Disque.h"

int main(int argc, char *argv[])
{
    float rayon;
    float perimetre;
    float surface;

    printf("Rayon du disque ?");
    scanf("%f", &rayon);
    disque(rayon, &perimetre, &surface);
    printf("Avec un rayon de %f, le disque a une surface de %f et un perimetre de %f", rayon, surface, perimetre);

    return 0;
}

void disque(float rayon, float *perimetre, float *surface)
{
    *perimetre = 2 * M_PI * rayon;
    *surface = M_PI * pow(rayon, 2);
}