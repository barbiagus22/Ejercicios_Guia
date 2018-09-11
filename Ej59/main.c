#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main()
{

    int vector [20]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    int mayor=0;

    for (int i=0; i< TAM; i++ )
    {

        if (vector[i]> mayor)
        {
            mayor= vector[i];
        }

    }

    printf( "El mayor es: %d", mayor);

    for (int i=0; i< TAM; i++ )
    {

        printf( " Los numeros del vector son: %d \n\n" , vector [i]);
    }


    return 0;
}
