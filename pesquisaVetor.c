#include <stdio.h>

int main()
{
    int vetor[10];
    int i, acha, busca;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero do elemento");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero do elemento que deseja buscar");
    scanf("%d", &busca);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i < 10))
    {
        if (vetor[i] == busca)
        {
            acha = 1;
        }

        else
        {
            i++;
        }
    }
    if (acha == 1)
        printf("O elemento %d foi encontrado na posicao %d.", busca, i);
    else
        printf("O elemento nao foi encontrado");
    return (0);
}