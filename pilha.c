// libs
#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

//constantes
#define tamanho 5

// estrutura da pilha
struct tpilha {
    int dados[tamanho];
    int ini;
    int fim;
};

// variaveis globais
struct tpilha pilha;
int op;

// prototipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

// Processamento
int main (){
    setlocale(LC_ALL, "Portuguese");
    op=1;
    pilha.ini = 0;
    pilha.fim = 0;
    while (op != 0 ) {
        system("cls");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op){
            case 1: 
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;
        }
    }
    return(0);
}

//Adicionando elementos
void pilha_entrar(){
    if (pilha.fim == tamanho) {
        printf("\nA pilha esta cheia, não e possivel empilhar mais!\n\n");
        system("pause");
    }
    else{
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}
// retirada do ultimo elemento
void pilha_sair(){
    if (pilha.ini == pilha.fim){
        printf("\nPilha vazia, impossivel desempilhar!\n\n");
        system ("pause");
    }else {
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

//mostrar conteudo da pilha
void pilha_mostrar(){
    int i;
    printf("[ ");
    for (i = 0; i < tamanho; i++){
    printf("%d", pilha.dados[i]);
    
    }
    printf("]\n\n");
}
//mostrar opções
void menu_mostrar(){
    printf("\nEscolha uma opção: \n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
}