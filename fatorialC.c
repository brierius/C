/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: Um numero inteiro int
2 - O que devo fazer  com estes dados: calcular o fatorial usando um multplicador
3 - Quais as restrições do problema: um numero que não seja inteiro
4 - Qual é o resultado esperado: calcular o fatorial de um numero inteiro
5 - Qual é a sequência de passos necessários para este fim:
    Receba um numero - num
    Crie um for, o numero recebido sera  a quantidade de vezes que o laço sera realizado
        for (i = 1, i >= num, num++ )
            fat = num*num;
    Apresente o resultado
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, fat, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    fat = 1;
    for (i = 1; i <= num; i++)
    {
        fat = fat * i;
    }

    printf("%d", fat);
    return (0);
}