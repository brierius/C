#include <stdio.h>

// declaracar o struct antes do main da ao mesmo escopo global
struct Produto
{
    int codigo;
    int quant;
    char descricao[50];
    float preco;
};

int main() // declarar struct dentro do main da a ele escopo local.
{
    struct produto ficha[10];

    printf("Digite o codigo do produto: \n");
    scanf("%d", &ficha.codigo);
    printf("Digite o descricao do produto: \n");
    scanf("%s", &ficha.descricao);
    printf("Digite o preco do produto: \n");
    scanf("%f", &ficha.preco);
    printf("Digite a quantidade em estoque: \n");
    scanf("%d", &ficha.quant);

    printf("Codigo: %d\n", ficha.codigo);
    printf("Descricao: %s\n", ficha.descricao);
    printf("Preco: %f\n", ficha.preco);
    printf("Saldo: %d\n", ficha.quant);

    return (0);
}
