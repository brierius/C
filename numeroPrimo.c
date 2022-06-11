/*
Entradas = numero - num
processo = 
    if num % 1 && num % 5
        primo
        Else
        Não e primo
    return
*/

#include <stdio.h>

int main ()
{
    int num, i, quantidade;

    printf("Digite um numero inteiro \n");
    scanf("%d", &num);
    quantidade = 0;

    for ( i = 1; i <= num; i++)
    {
        if (num % i == 0)
            quantidade++;
    }
        if (quantidade == 2)
            printf("O numero e primo");
        else  
            printf("Nao e primo");
        return(0);
    
    

    
}