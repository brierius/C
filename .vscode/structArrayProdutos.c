#include <stdio.h>

struct produto
{
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main()
{
    struct produto ficha[10];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &ficha[i].codigo);
        printf("Digite a descricao do produto: ");
        scanf("%s", &ficha[i].descricao);
        printf("Digite o preco do produto: ");
        scanf("%f", &ficha[i].preco);
        printf("Digite o saldo: ");
        scanf("%d", &ficha[i].saldo);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n Produto %d\n", i + 1);
        printf("Codigo %d\n", ficha[i].codigo);
        printf("Descricao %s\n", ficha[i].descricao);
        printf("Preco %.2f\n", ficha[i].preco);
        printf("Saldo %d\n", ficha[i].saldo);
        printf("Valor total em estoque %.2f", ficha[i].preco * ficha[i].saldo);
    }
    return (0);
}