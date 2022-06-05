#include <stdio.h>

main (){
// variaveis
    int num, ant, suc;

// Entradas
    printf("Escolha um numero: ");
    scanf("%i", &num);

    suc = num+1;
    ant = num-1;

    printf("\nO numero escolhido e: %i", num);
    printf("\nO sucessor deste numero e: %i", suc);
    printf("\nO antecessor a este numero e: %i", ant);  

}