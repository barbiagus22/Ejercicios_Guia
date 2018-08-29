#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float superficie;

    printf( "Ingrese BASE del triangulo: ");
    scanf("%f" , &base);

    printf( "Ingrese ALTURA del triangulo: ");
    scanf("%f" , &altura);

    superficie= (base*altura)/2;

    printf( " La superficie del triangulo es %f:  ", superficie);

    return 0;
}
