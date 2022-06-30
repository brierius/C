#include <stdio.h>

int main()
{
    int x = 10;
    double y = 20.50;
    char z = 'A';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("\nEndereco de X = %i - Valor x = %i", pX, *pX);// %i = indica que o numero memoria é um inteiro
    printf("\nEndereco de Y = %i - Valor Y = %f", pY, *pY);// %f = float, px = endereço e *px = valor
    printf("\nEndereco de Z = %i - Valor Z = %c", pZ, *pZ);// %c = char ou %s = string

    double soma = *pX+*pY;

    printf("\nA soma dos ponteiros de X e Y e igual a %.2f", soma);
    return (0);
}