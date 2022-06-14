#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o elemento do vetor: \n");
        scanf("%d", &vetorA[i]);
    }
    printf("Vetor preenchido\n");
    for (i = 0; i < 10; i++)
    {
        printf("O elemento da posicao %d e: %d \n", i, vetorA[i]);
        vetorA[i];
    }
    return (0);
}