#include <stdio.h>
// programa que receba dois numeros e eleve o primeiro ao segundo
int main()
{
    // variaveis
    float numero1, numero2, potencia;

    // entradas
    printf("Digite um numero: ");
    scanf("%f", &numero1);
    printf("Digite um numero: ");
    scanf("%f", &numero2);

    potencia = pow(numero1, numero2);

    printf("\n %.2f elevado a %2.f e: %2.f", numero1, numero2, potencia);

    return (0);
}
