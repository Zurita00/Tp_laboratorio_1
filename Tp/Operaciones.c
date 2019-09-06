#include <stdio.h>
#include "Operaciones.h"


float sumar ( float A, float B)
{
    float suma;

    suma = A + B;

    return suma;
}

float restar (float A, float B)
{

    float resta;

    resta = A - B;

    return resta;
}


float multiplicar (float A, float B)

{
    float multiplicacion;

    multiplicacion = A * B;

    return multiplicacion;

}

float dividir(float A, float B)

{
    float division;

   division = A / B;

    return division;
}

float factorial ( float A)

{
    float factorialA;

    if( A == 0) /**< Si A es igua a 0 devolvera el valor 1 */
    {
        factorialA = 1;
    }
    else /**< Si no es asi se realiza A por factorial */
    {
        factorialA = A * factorial(A-1); /**< Primero al valor A se le resta 1 y al numero que se llega se lo multiplica por A */
    }

    return factorialA; /**< Retorna factorial de A */
}

