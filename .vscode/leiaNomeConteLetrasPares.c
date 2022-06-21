/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: nome
2 - O que devo fazer  com estes dados: contar as letras nas posições pares
3 - Quais as restrições do problema: só pode ser recebido strings
4 - Qual é o resultado esperado: apenas as letras nas posições pares
5 - Qual é a sequência de passos necessários para este fim:
        receber um nome
        contar a quantidade de letras
        for (tamanho palavra)
            se letra par
                então mostrar
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    int i, tam;

    printf("Digite um nome: ");
    gets(nome);
    tam = strlen(nome);
    for (i = 0; i < tam; i++)
    {
        if (i % 2 == 1)  // <==< Aqui não se coloca chaves
            printf("%c", nome[i]);
    }
    return (0);
}