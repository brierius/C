// imc homem = (72,7x altura) - 58 // mullher (62,1 x altura) - 44,7 
#include <stdio.h>

int main(){
    //variaveis = altura, peso, sexo
    float altura, peso, pesoIdeal;
    int op; //homem ou mulher

    //entradas
    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("Digite seu peso:");
    scanf("%f", &peso);
    printf("Escolha uma opcao: \n 1 - Homem \n 2 - Mulher\nDigite: ");
    scanf("%d", &op);

    if (op == 1)
    {
        pesoIdeal = (72.7*altura) - 58;
    }
    else 
    {
        pesoIdeal = (62.1*altura) - 44,7;
    }
    printf("Seu sexo e: %i\n", op);
    printf("Sua altura e: %3.f\n", altura);
    printf("Seu peso atual e: %3.f\n",peso);
    printf("Seu peso ideal e: %3.f\n", pesoIdeal);

    return(0);
}