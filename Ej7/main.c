#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float longuitud;
    float pi= 3.14;
    float area;

    printf( "Ingrese el radio del circulo: ");
    scanf( "%f" , &radio);

    longuitud= 2*pi*radio;
    area= pi*(radio*radio);


    printf( " La longuitud del circulo es : %f\n y su area %f\n es:  ", longuitud, area);







    return 0;
}
