#include <stdio.h>
#include <math.h>

int main (){

    //variaveis
    float num1, num2, resultado;
    int op;

    //input
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    printf("Escolha uma operacao: \n 1 - Soma \n 2 - Subtracao \n 3 - Divisao \n 4 - Multiplicacao\n");
    scanf("%d", &op);

    //processamento e saida
    switch (op)
    {

        case 1: 
        resultado = num1+num2;
        printf("A soma e: %3.f\n", resultado);
        break;

        case 2:
        resultado = num1-num2;
        printf("A subtracao e: %3.f\n", resultado);
        break;

        case 3:
        resultado = num1/num2;
        printf("A divisao e: %3.f\n", resultado);
        break;

        case 4: 
        resultado = num1*num2;
        printf("A multiplicacao e: %3.f\n", resultado);
        break;

        default:
        printf ("Opção inválida.\n");
        break;

    }
    return (0);
}