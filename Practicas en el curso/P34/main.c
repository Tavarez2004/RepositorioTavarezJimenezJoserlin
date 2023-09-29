#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero = 0;
    float flotante = 0.0;
    double decimal = 0.0;
    char letra = 'a';
    long long int lentero = 0;

    printf("\nMemoria ocupada de memoria en byte entero %i", sizeof(entero));
    printf("\nMemoria ocupada de memoria en byte flotante %i", sizeof(flotante));
    printf("\nMemoria ocupada de memoria en byte double %i", sizeof(decimal));
    printf("\nMemoria ocupada de memoria en byte caracter %i", sizeof(letra));
    printf("\nMemoria ocupada de memoria en byte long %i", sizeof(lentero));

    printf("\nDireccion de memoria de decimal %p", &decimal);
    return 0;
}

