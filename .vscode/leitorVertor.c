/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: entrada vetores
2 - O que devo fazer  com estes dados: ler os vetores e depois imprimir na ordem contrária
3 - Quais as restrições do problema: apenas numeros inteiros
4 - Qual é o resultado esperado: seja impresso na tela os numeros na ordem contrária a digitada
5 - Qual é a sequência de passos necessários para este fim:
        Criar um DEFINE com tamanho do vetor, assim o mesmo se torna variavel
        criar uma variavel , num, i e vetorNum
        criar um for
        receber os numeros
        imprimi-los na ordem contrária


#include <stdio.h>
#define TAM 5

int main()
{
    int num, i;
    int vetorNum[TAM]; 

    for (i=0; i< TAM; i++)
    {
        printf("Digite o numero %d do vetor\n", i);
        scanf("%d", &vetorNum[i]);
    }
    for (i= (TAM-1);i>0; i--)
    {
        printf("\n %d", vetorNum[TAM]);
    }
    return(0);
}

*/

#include <stdio.h>
int main()
{
int vetorA[5];
int i;

for (i=0;i<5;i++)
{
printf("Digite o %d elemento:", i);
scanf("%d", &vetorA[i]);
}
for (i=4;i>=0;i--)
{
printf("\n %d", vetorA[i]);
}
return (0);
}