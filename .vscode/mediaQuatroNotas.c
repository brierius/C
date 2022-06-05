#include <stdio.h>

// entrada receber quatro notas
// processamento somar 4 notas e dividir por quatro
// saida demonstrar o valor na tela

main()
{
    // variaveis
    float nota1, nota2, nota3, nota4, media;

    // processamento

    printf("Digite a nota 01: ");
    scanf("%f", &nota1);
    printf("Digite a nota 02: ");
    scanf("%f", &nota2);
    printf("Digite a nota 03: ");
    scanf("%f", &nota3);
    printf("Digite a nota 04: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4);
    media = media/4;

    printf("A media de suas notas e: %.2f", media);
    return(0);
    // saida
}