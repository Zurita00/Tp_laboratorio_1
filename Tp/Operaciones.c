#include <stdio.h>
#include "Operaciones.h"

int sumar ( int A, int B)
{
    float resultado;

    resultado = A + B;

    return resultado;
}
/** \brief Funcion creada para realizar la suma y pedir los numeros.
 *
 * \param Creo la variable resultado.
 * \param Sumo las variables A y B dandole el valor a resultado.
 * \return Devuelve el resultado.
 *
 */

int restar (int A, int B)
{

    float resultado;

    resultado = A - B;

    return resultado;
}
/** \brief Funcion creada para realizar la suma y pedir los numeros.
 *
 * \param Creo la variable resultado.
 * \param Realizo la operacion de la resta dandole valor a resultado.
 * \return Devuelve el resultado.
 */

int multiplicar (int A, int B)

{
    float resultado;

    resultado = A * B;

    return resultado;

}
/** \brief Funcion creada para realizar la multiplicacion y pedir los numeros.
 *
 * \param Creo la variable resultado
 * \param Multiplico A por B.
 * \return Devuelve el resultado.
 *
 */
float division (int A, int B)

{
    float resultado;

    resultado = A / B;

    return resultado;
}
/** \brief Funcion creada para realizar la division y pedir las variables A y B.
 *
 * \param Creo la variable resultado.
 * \param Division.
 * \return Devuelve el resultado.
 *
 */
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

/** \brief Realizo la funcion de factorial con un entero.;
 *
 * \param Creo la variable resultado.
 * \param Si el entero A es igual a 0, el resultado siempre sera 1
 * \param Si no lo es realizo la factorial de A
 * \return Devuelve el resultado
 *
 */
}

