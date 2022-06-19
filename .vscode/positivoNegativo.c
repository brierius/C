/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: Um numero
2 - O que devo fazer  com estes dados: Avaliar se ele é posito ou negativo
3 - Quais as restrições do problema: Se um 0 for digitado ele não é nem positivo nem negativo
4 - Qual é o resultado esperado: Que o programa informe se o numer é posito, negativo ou neutro, no caso 0.
5 - Qual é a sequência de passos necessários para este fim:
    digite um numero
    leia o numero
        se n > 0;
            entao positivo informar na tela numero positivo
            senao
                n < 0;
                    informar na tela numero negativo
                senao = 0;
                    numero neutro.
*/

#include <stdio.h>

int main()
{
    float n;

    printf("Digite um numero positivo, negativo ou zero \n");
    scanf("%f", &n);

    if (n > 0)
    {
        printf("\nO numero e positivo");
    }
    if (n < 0)
    {
        printf("\nO numero e negativo");
    }
    if (n == 0)
    {
        printf("\nO numero digitado e zero, sendo assim nao e positivo nem negativo, ele e neutro");
    }

    return (0);
}