#include <stdio.h>

/*
Estrutura For <== é executada pelo menos uma vez
for (contador = x; contador >ou< x; contador ++/-- ) <== não tem pontp e virgula e nem chaves
    função a ser executada;
*/


int main (){

    char nome [10];
    int contador, numero;

    printf("Digite um nome: \n");
    scanf("%s", nome);

    for (contador = 1; contador <= 10; contador++)
        printf("\n %s",nome);
    return(0);

}