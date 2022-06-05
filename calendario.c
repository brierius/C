/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: numero de 1-12
2 - O que devo fazer  com estes dados: comprar com o calendario e fornecer o mes correspondente
3 - Quais as restrições do problema: um numero diferente de 1-12
4 - Qual é o resultado esperado: fornecer o mes correspondente
5 - Qual é a sequência de passos necessários para este fim:  
    receber um numero 
    criar um case 1-12 com os respectivos meses
    imprimir na tela o mes correspondente 
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero de 1-12: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("O mes digitado e Janeiro");
        break;
    case 2:
        printf("O mes digitado e Fevereiro");
        break;
    case 3:
        printf("O mes digitado e Março");
        break;
    case 4:
        printf("O mes digitado e Abril");
        break;
    case 5:
        printf("O mes digitado e Maio");
        break;
    case 6:
        printf("O mes digitado e Junho");
        break;
    case 7:
        printf("O mes digitado e Julho");
        break;
    case 8:
        printf("O mes digitado e Agosto");
        break;
    case 9:
        printf("O mes digitado e Setembro");
        break;
    case 10:
        printf("O mes digitado e Outubro");
        break;
    case 11:
        printf("O mes digitado e Novembro");
        break;
    case 12:
        printf("O mes digitado e Dezembro");
        break;
        
    
    default:
        printf("O numero solicitado nao esta entre 1-12");
        break;
    }
    return(0);

}