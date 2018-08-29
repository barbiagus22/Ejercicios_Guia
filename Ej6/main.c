#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int contadorPositivos=0;
    int contadorNegativos=0;


    while(contador<4)
    {
    printf( "Ingrese un numero" );
    scanf( "%d" , &numero );
    contador++;

        if (numero>0) {

            contadorPositivos++;
        }
        else {

            contadorNegativos++;
        }

    }

    printf( " la cantidad de numeros mayores a 0 es:  %d\n y la cantidad de numeros menores a 0 es :  %d\n ", contadorPositivos, contadorNegativos);

    return 0;
}
