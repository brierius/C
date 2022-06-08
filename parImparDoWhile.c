/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: numero
2 - O que devo fazer  com estes dados:avaliar se e par ou impar
3 - Quais as restrições do problema: não ser digitado um numero
4 - Qual é o resultado esperado: informar se e par ou impar
5 - Qual é a sequência de passos necessários para este fim: usar a estrutura
    while para avaliar se o numero e par ou impar
*/

#include <stdio.h>

int main()
{
    int num, par, impar;
    par = 0;
    impar = 0;
    do
    {
        printf("Digite um numero\n");
        scanf("%d", &num);

        if (num % 2 == 0)
        par++;
        else 
        impar++;
    } while (num != 0);
    printf("O numero de pares e: %d\n", par);
    printf("O numero de impares e: %d\n", impar);
    return (0);
}