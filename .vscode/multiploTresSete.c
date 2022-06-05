/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: Um numero
2 - O que devo fazer  com estes dados: Avaliar se ele é multiplo de 3 E 7
3 - Quais as restrições do problema: Numero que não é multiplo
4 - Qual é o resultado esperado: Informar se o numero é multiplo de 3 E 7
5 - Qual é a sequência de passos necessários para este fim:
    solicitar um numero
    avaliar se ele é multiplo de 3
        se sim, é multiplo de 7?
        Informe: o numero é multiplo de 3 e 7
            Senão
            O numero não é multiplo de 3 e 7
*/

#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 7 == 0))
    {
        printf("O numero %d", num);
        printf(" e multiplo de 3 e 7 ");
    }
    else
    {
        printf("O numero %d", num);
        printf(" nao e multiplo de 3 e 7");
    }
}