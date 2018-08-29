#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resta;

    printf("Ingrese un numero");
    scanf( "%d" , &numero1);

    printf(" Ingrese otro numero");
    scanf( "%d", &numero2);

    resta= numero1 - numero2;

    printf(" La resta es : %d\n ", resta);

    if  ( resta>0) {

        printf( " Resultado Positivo");
    }
    else {

        printf( " Resultado Negativo");
    }



    return 0;
}
