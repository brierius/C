#include <stdio.h>
#include <math.h>

int main(){
    // variaveis
    int num;
    float raiz;

    // entrada dados

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        raiz = sqrt(num);
        printf ("\nO numeros escolhido e par e sua raiz quadrada e: %.3f", raiz);
    } else {
        raiz = sqrt(num);
        printf ("\nO numeros escolhido e impar e sua raiz quadrada e: %.3f", raiz);

    }
    return (0);
} 