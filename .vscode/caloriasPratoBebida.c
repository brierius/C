#include <stdio.h>

int main(){
    // varivaveis
    int op, op2;
    float total;

    total = 0;

    // Inputs
    printf("Escolha um prato: \n1 - Italiano \n2 - Japones\n3 - Salvadorenho\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        total = total + 750;
        break;
    case 2: 
        total = total + 324;
        break;
    case 3:
        total = total + 545;
        break;
    default:
        break;
    }
    printf("Escolha um tipo de bebida: \n1 - Cha\n2 - Suco\n3 - Refrigerante\n");
    scanf("%d", &op2);
    switch (op2)
    {
    case 1: 
        total = total + 30;
        break;
    case 2:
        total = total + 80;
        break;
    case 3:
        total = total + 90;
        break;
    default:
        break;
    }
    printf("O total de calorias do seu prato e bebida e: %.2f\n\n", total);
    return(0);
}