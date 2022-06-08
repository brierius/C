/*
Estrutura While
while (condição) <== só serão executadas se for true, ou seja pode nem ser executada
{
    <instruções>;
}

*/

#include <stdio.h>

int main()
{
    int contador, i;
    char nome[15];
    printf("Digite seu nome\n");
    scanf("%s", nome);
    printf("Digite um numero de vezes que quer ve lo escrito\n");
    scanf("%d", &contador);
    i = 0;

    while (i != contador)
    {
        printf("\n %d - %s",i , nome);
        i++;
    }
    return (0);
}