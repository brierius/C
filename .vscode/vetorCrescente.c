/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: Dois vetores que recebam numeros inteiros
2 - O que devo fazer  com estes dados: Somar os dois vetores e imprimi-los em ordem crescente
3 - Quais as restrições do problema: Numeros devem ser inteiros
4 - Qual é o resultado esperado: Duas somas colocadas em ordem crescente.
5 - Qual é a sequência de passos necessários para este fim:
        criar um define TAM para poder controlar o tamanho do vetor
        criar variavel vetorA, vetorB, vetorC, num, num2, troca;
        criar vetorA
        criar vetorB
        somar vetorA+vetorB
        Atribuir a soma ao vetorC e colocá-los em ordem crescente
        apresentar na tela
*/

#include <stdio.h>
#define TAM 5

int main ()
{
    int vetorA[TAM], vetorB[TAM], vetorC[TAM+TAM];
    int num, num2, troca;

    for (num = 0; num<TAM; num++)
    {
        printf("Digite o elemento %d do vetor A ", num);
        scanf("%d", &vetorA[num]);
        printf("Digite o elemento %d do vetor B ", num);
        scanf("%d", &vetorB[num]);
        vetorC[num] = vetorA[num] + vetorB[num];
    }
    for (num=0; num<TAM; num++)
    {
        for (num2 = num+1; num2<TAM; num2++)
        {
            if (vetorC[num]>vetorC[num2])
            {
            troca = vetorC[num];
            vetorC[num] = vetorC[num2];
            vetorC[num2] = troca; 
            }
        }
    }
    for (num=0; num < TAM; num++)
    {
        printf("%d - ", vetorC[num]);
    }
    return(0);
}