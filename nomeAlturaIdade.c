#include <stdio.h> // Bibliotecas necessárias
#include <math.h>

int main() // inicio programa
// variáveis
{
    int idade, ano; // inteiro variavel idade, ano - usa-se %i = %int
    float altura; // usa-se %f = %float
    char nome[30]; // string 30 caracteres usa-se %s = %string

    // entrada de dados
    printf("Digite seu nome: "); // mensagem usuário
    scanf("%s", &nome);          // lê nome
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    ano = 2022 - idade; // calculo data nascimento

    // saida de dados
    printf("\nSeja bem vindo %s", nome);
    printf("\nO seu nome e: %s", nome);
    printf("\nA sua altura e: %.2f", altura);// %.2f o .2 indica que a saida deverá ter duas casas decimais
    printf("\nA sua idade e: %i", idade);
    printf("\nO ano de nascimento e: %d", ano);
    return (0); // finaliza o programa
}
