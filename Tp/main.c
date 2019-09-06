#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    float A = 0;
    float B = 0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorialA;
    float factorialB;
    char salir = 's';
    int opcion;

    do
    {
        printf("CALCULADORA\n");
        printf("\n 1.Ingresar 1er operando (A=%2.f)\n ",A);
        printf("\n 2.Ingresar 2do operando (B=%2.f)\n", B);
        printf("\n 3.Calcular las operaciones: \n");
        printf("\n      Sumar(A+B)");
        printf("\n      Restar(A-B)");
        printf("\n      Multiplicar (A*B)");
        printf("\n      Dividir(A/B)");
        printf("\n      Factorial(A! B!)");
        printf("\n\n 4.Informar resultados de las operaciones.");
        printf("\n\n 5.Salir \n");;
        printf("\n Ingrese una de las siguientes opciones:");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            system("cls");
            printf("\nIngrese el primer operando: \n");
            scanf("%f", &A);
            break;

            system("pause");

        case 2:
            system("cls");
            printf("Ingrese el segundo operando: \n");
            scanf("%f", &B);
            break;


        case 3:
            system("cls");
            suma = sumar( A, B );
            resta = restar( A, B);
            multiplicacion = multiplicar( A, B );
            division = dividir( A, B);
            factorialA = factorial(A);
            factorialB = factorial(B);

            printf("Operaciones calculadas.\n");
            system("pause");
            break;

        case 4:

            printf("El resultado de %2.f + %2.f es: %2.f\n", A, B, suma);
            printf("El resultado de %2.f - %2.f es: %2.f\n", A, B, resta);
            printf("El resultado de %2.f * %2.f es: %2.f\n", A, B, multiplicacion);
            if( division == 0 )
            {
                printf("No puede dividirse por 0");
            }

            else
            {
                printf("El resultado de %2.f / %2.f  es: %2.f\n", A, B, division);
            }

            if( A > 0 || B > 0)
            {
                factorial(A);
                factorial(B);
                printf("\nEl factorial de %2.f y %2.f es: %.2f\n y %.2f\n", A, B,factorialA, factorialB );
            }

            else
            {
                printf("\nEl factorial de %2.f no se puede realizar\n",A);
                printf("\nEl factorial de %2.f no se puede realizar\n",B);
            }
            system("pause");
            break;

        case 5:
            salir = 'n';
            system("cls");
            break;

        default:
            printf("\nNo ingresó una opcion valida\n\n");
            system("pause");
        }

    system("cls");
    }
    while ( salir != 'n');
    return 0;
}
