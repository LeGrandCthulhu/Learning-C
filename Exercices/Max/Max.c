#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "Max.h"

int main(int argc, char *argv[])
{
    float a, b;

    printf("Valeur de a ?\n");
    scanf("%f", &a);
    printf("Valeur de b ?\n");
    scanf("%f", &b);
    printf("La valeur maximale est %f", max(a, b));

    return 0;
}

float max(float a, float b)
{
    assert(a != b);

    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
}