#include <stdio.h>
#include <stdlib.h>
#include "Fahrenheit.h"

int main(int argc, char *argv[])
{
    int choix = 0;
    float temp;

    while (choix != 1 && choix != 2)
    {
        printf("1.Celsius vers Fahrenheit\n");
        printf("2.Fahrenheit vers Celsius\n");
        scanf("%d", &choix);
    }

    if (choix == 1)
    {
        printf("Temperature a convertir ?\n");
        scanf("%f", &temp);
        printf("%f oC => %f oF\n", temp, cToF(temp));
    }
    else
    {
        printf("Temperature a convertir ?\n");
        scanf("%f", &temp);
        printf("%f oF => %f oC\n", temp, fToC(temp));
    }
        

    return 0;
}

float cToF(float temp)
{
    temp = temp * 1.8 + 32;

    return temp;
}

float fToC(float temp)
{
    temp = (temp - 32) / 1.8;

    return temp;
}