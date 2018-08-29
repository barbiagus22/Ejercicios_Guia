#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;

    printf("Ingrese un numero");
    scanf ("%d", &numero);


    /* do {

        printf("ERROR, el numero debe ser mayor que cero");
        scanf ("%d", &numero);
        contador= contador+1;

    }while(numero<0);
    */

   while (numero<0) {

        printf("ERROR, el numero debe ser mayor que cero");
        scanf ("%d", &numero);
        contador= contador+1;
    }


    return 0;
}
