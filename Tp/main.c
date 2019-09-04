#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    int A;
    int B;
    float resultado;
    char operacion;

    printf("Ingrese el primer numero: ");
    scanf("%d", &A);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &B);

    printf("Ingrese la operacion que desea realizar: ");
    printf( "\na.Sumar \nb.Restar \nc.Multiplicar \nd.Division \ne.Factorial \nf.Salir\n" );
    fflush(stdin);
    scanf("%c", &operacion);

    switch (operacion)
    {
    case 'a':
        resultado = sumar( A, B );
        printf("El resultado de %d + %d es: %2.f", A, B, resultado);
        break;
    case 'b':
        resultado = restar( A, B);
        printf("El resultado de %d - %d es: %2.f", A, B, resultado);
        break;
    case 'c':
        resultado = multiplicar( A, B );
        printf("El resultado de %d * %d es: %2.f", A, B, resultado);
        break;
    case 'd':
        if( B != 0 )
        {
            resultado = division( A, B);

            printf("El resultado de %d / %d  es: %2.f", A, B, resultado);
        }
        else
        {

            printf("No puede dividirse por 0");
        }
        break;
    case 'e':
        if( A <0)
        {
            printf("\nEl factorial de %d no se puede realizar \n",A);
        }
        else
        {
            resultado = factorial(A);
            printf("\nEl factorial de %d es: %.2f\n", A, resultado);
        }
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
    case 'f':
        printf("Ha salido");
    }


}
