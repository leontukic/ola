/*
 * informeResultados.c
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "informeResultados.h"

void mostarSuma(int a,int b, int c)
{
    printf("\nEl resultado de %d + %d es: %d ", a, b, c);
}

void mostrarResta(int a,int b, int c)
{
     printf("\n\nEl resultado de %d - %d es: %d ", a, b, c);
}

void mostrarDivision(int a,int b, float c)
{
    printf("\n\nEl resultado de %d / %d es: %.2f ", a, b, c);
}

void mostrarMultiplicacion(int a,int b, int c)
{
    printf("\n\nEl resultado de %d * %d es: %d ", a, b, c);
}

void mostrarFactorial(int a, int b, int c, int d)
{
    printf("\n\nEl el factorial de %d es: %d y el factorial de %d es: %d \n\n", a, b, c, d);
}
