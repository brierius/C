/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: codigo, autor, area, ano, editora
2 - O que devo fazer  com estes dados: cadastrar livro no sistema
3 - Quais as restrições do problema:
4 - Qual é o resultado esperado: um menu interativo com Cadastrar, Mostar informações, Pesquisar por codigo,
        ordenar por ano, sair do programa
5 - Qual é a sequência de passos necessários para este fim: 
        criar um struct de escopo global
        criar campos, codigo, autor, area, ano, editora
        criar o main
        definir valores das variaveis
        criar um switch
            1 - cadastrar
                    usar o struct
            2 - mostrar informações dos livros
                    printf - livros
            3 - Pesquisar por codigo
                    criar um mecanismo de busca
            4 - ordenar por ano
                    criar um vetor de ordenação
            5 - Sair do programa
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

struct livro 
{
    int codigo;
    char titulo[50];
    char autor[50];
    char area[50];
    int ano;
    char editora[50];
};

int main ()
{
    struct livro ficha[TAM];
    struct livro troca;
    int i,j,op, busca, acha;

    op=0;

    while (op != 5)
    {
    printf("Escolha uma das opcoes abaixo: \n 1 - Cadastrar Livro\n 2 - Mostrar Informacoes dos livros\n 
    3 - Pesquisar livros por codigos\n 4 - Ordenar Livros por Ano\n 5 - Sair \n");
    scanf("%d", &op);
    ffflush(stdin);
    }
    
    if (op == 1) 
        {
        system("cls");
        for(i=0; i<TAM; i++)
        {
        printf("Digite o codigo do livro %d", i+1);
        scanf("%d", &ficha[i].codigo);
        ffflush(stdin);
        printf("Digite o titulo do livro");
        scanf("%50[^\n]s", &ficha[i].titulo);
        ffflush(stdin);
        printf("Digite o autor do livro");
        scanf("%30[^\n]s", &ficha[i].autor);
        ffflush(stdin);
        printf("Digite o area do livro");
        scanf("%30[^\ns]", &ficha[i].area);
        ffflush(stdin);
        printf("Digite o ano do livro");
        scanf("%d", &ficha[i].ano);
        ffflush(stdin);
        printf("Digite o editora do livro");
        scanf("%30[^\ns]", &ficha[i].editora);
        ffflush(stdin);
        }   
    }
        else
        {
            if (op==2)
            {
                system("cls");
                for (i=0; i<TAM; i++)
                {
                    printf("\nCodigo: %d\n, ficha[i].codigo");
                    printf("\nTitulo: %d\n, ");
                }
            }
        }
  

    return(0);
}