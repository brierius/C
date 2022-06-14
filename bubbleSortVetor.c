#include <stdio.h>

int main ()
{
    int vetorA [5];
    int i, aux, troca;
    for (i= 0; i < 5; i++)//recebe os valores do vetor
    {
        printf("Digite o %d elemento:", i);
        scanf("%d", &vetorA[i]);
    }

    for(i=0; i < 5; i++)
    {
        printf("\nOrdenacao atual - %2d - ", vetorA[i]);
    }
        for (i = 0; i < 4; i++)// indica que o vetor para ser organizado devera fazer 9 loops, (10 vetores menos 1)
        {
            for (aux = i+1; aux<5; aux++)// vetor de ordenação, comprara valores vizinhos.
            {
                if (vetorA[i] > vetorA[aux])
                {
                    troca = vetorA[i];
                    vetorA[i] = vetorA[aux];
                    vetorA[aux] = troca;
                }
            }
        }
        printf("\n VETOR ORDENADO:");
        for (i = 0; i<5; i++)
        {
            printf("\n %d", vetorA[i]);
        }
        return(0);
    
}