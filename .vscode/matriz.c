#include <stdio.h>

int main ()
{
    int matriz [2][5];//<== 02 = linha e 05 = coluna, sempre sera linha, coluna.
    int i, k; // i = linha - k = coluna

    for (i=0; i<2; i++)// <== Informa para o for a linha que deve ser colocado os valores, linha 1,2,3,4 etc...
    {
        for (k = 0; k<5; k++)// <== repete 5 vezes o laço, e a cada vez coloca um valor na coluna, 
        // quando completo, volta para o for e muda de linha
        {
        printf("Insira um elemento na linha %d, coluna %d ", i,k);
        scanf("%d", &matriz[i][k]);
        }
    }
    for (i=0; i<2; i++)// exibe sequencia dos valores contidos na linha um, 
                        //desce para o for abaixo e completo volta para este for e muda-se de linha
    {
        for(k = 0; k<5; k++)// exibe sequencia dos valores contidos na coluna de 1-5.
        {
            printf("O elemento da linha %d, coluna %d e %d\n", i,k, matriz[i][k]);
        }
    }
    return(0);
}

