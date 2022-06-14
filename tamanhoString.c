#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[80];// <== char = string cadeia de char, 80 tamanho maximo do nome; get so le caracteres e lê a informção até
    // o fim da linha incluindo os espaços, enquanto scanf para quando acha o fim da linha ou um espaço e lê outros tipos de dados 
    // diferentes de char. 
    int tamanho;
    printf("Digite seu nome completo\n\n");
    gets(nome); // <== gests, puxa o valor da variavel nome
    tamanho = strlen(nome); //<== strlen recebe o tamanho da variavel nome
    printf("O comprimento do nome e:  %d\n", tamanho);
    return(0);
}