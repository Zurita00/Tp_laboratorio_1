#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    /**< Creo las variables para las funciones */
    int A;
    int B;
    float resultado;
    char operacion;

    do
    {
        printf("Ingrese el primer numero: \n"); /**< Pido el primer numero */
        scanf("%d", &A);
        printf("Ingrese el segundo numero: \n"); /**< Pido el segundo numero */
        scanf("%d", &B);

        printf("Ingrese la operacion que desea realizar: \na.Sumar \nb.Restar \nc.Multiplicar \nd.Division \ne.Factorial \nf.Salir\n" );
        /**< Ingreso las operaciones para que el usuario pueda elegir. */
        fflush(stdin);

        scanf("%c", &operacion);

        switch (operacion)
        {
        case 'a':
            resultado = sumar( A, B );
            printf("El resultado de %d + %d es: %2.f\n", A, B, resultado);
            break;
            /**< Si el usuario elije la opcion a, se realiza la funcion suma */
        case 'b':
            resultado = restar( A, B);
            printf("El resultado de %d - %d es: %2.f\n", A, B, resultado);
            break;
            /**< Si el usuario elije la opcion b, se realiza la funcion restar */
        case 'c':
            resultado = multiplicar( A, B );
            printf("El resultado de %d * %d es: %2.f\n", A, B, resultado);
            break;
            /**< Si el usuario elije la opcion c, se realiza la funcion multiplicar */
        case 'd':
            if( B != 0 )
            {
                resultado = division( A, B);
                printf("El resultado de %d / %d  es: %2.f\n", A, B, resultado);
            }
            /**< Si el usuario elije la opcion a, se realiza la funcion division */
            else
            {
                printf("No puede dividirse por 0");
            }
            break;
            /**< Si el usuario ingresa el numero 0 en B, la division no puede realizarse */
        case 'e':
            if( A <0)
            {
                printf("\nEl factorial de %d no se puede realizar \n",A);
            }
            /**< Si el numero ingresado por el usuario es menor a 0, el factorial no puede realizarse */
            else
            {
                resultado = factorial(A);
                printf("\nEl factorial de %d es: %.2f\n", A, resultado);
            }
            /**< Si el usuario elije la opcion a, se realiza factorial de A*/
            if(B <0)
            {
                printf("\nEl factorial de %d no se puede realizar \n",B);
            }
            else
            {
                resultado = factorial(B);
                printf("\nEl factorial de %d es: %.2f\n", B, resultado);
            }
            break;
            /**< Lo mismo ocurre en este if y else */

        case 'f':
            printf("Salida.\n");
            break;
/**< Si el usuario elije la opcion a, se realiza la funcion suma */
        default:
            printf("No ha ingresado ninguna de las opciones.");
        }

        system("pause"); /**< Pausa el sistema */

    }
    while ( operacion != 'f');
    /**< Si el usuario elije la opcion a, se realiza la funcion suma */

    return 0;
}
