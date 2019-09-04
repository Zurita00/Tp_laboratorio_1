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
    fflush(stdin);
    printf("Ingrese la operacion que desea realizar: ");
    printf( "\na.Sumar \nb.Restar \nc.Multiplicar \nd.Division \ne.Factorial\n\n" );

    scanf("%c", &operacion);

        switch (operacion)
        {
        case 'a':
            resultado = sumar( A, B );
        break;
        case 'b':
            resultado = restar( A, B);
        break;
        case 'c':
            resultado = multiplicar( A, B );
        break;
        case 'd':
            resultado = division( A, B);
        break;
        case 'e':
            resultado = factorial(A);
            break;
    }
    printf("El resultado es %f", resultado);

}
