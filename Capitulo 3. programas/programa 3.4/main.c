#include <stdio.h>
#include <stdlib.h>

void main(void)

{
int NUM;
long CUA, SUC = 0;
printf("\nIngrese un numero entero -0 para terminar-:\t");
scanf("%d", &NUM);
while (NUM)
    //observa que la condicion es verdadera mientras el entero es diferente de cero//
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %1d", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los enteros es %1d", SUC);
}
