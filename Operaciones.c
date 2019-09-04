#include <stdio.h>
#include "Operaciones.h"

int sumar ( int A, int B)
{
    float resultado;

    resultado = A + B;

    return resultado;
}

int restar (int A, int B)
{

    float resultado;

    resultado = A - B;

    return resultado;
}

int multiplicar (int A, int B)

{
    float resultado;

    resultado = A * B;

    return resultado;

}

float division (int A, int B)

{
    float resultado;

    resultado = A / B;

    return resultado;
}

int factorial ( int A)

{
    int resultado;

    if( A == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = A * factorial(A-1);
    }

    return resultado;
}

