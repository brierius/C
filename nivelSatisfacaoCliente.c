/*
Objetivo: colher a opinião do cliente (1 - Satisfatorio, 2 - Indiferente, 3 - Insatisfeito)
mostre o numero de clientes satisfeitos e sua media de idade e o total de clientes insatisfeitos e sua media idade
idade = 0 encerra o programa.
entradas = idade, opinião.
variaveis = somaIdade, somaClientes, mediaIdade
saidas = mediaIdade, totalSatisfeitos, totalInsatisfeitos e totalIndiferentes 
*/
#include <stdio.h>

    int idade, opiniao;
    float somaIdade, somaClientes, somaSatisfeito, somaIndiferente, somaInsatisfeito, 
            somaIdadeSatisfeito, somaIdadeIndiferente, somaIdadeInsatisfeito;
int main ()
{
    

    somaClientes = 0;
    somaIdade = 0;

    
    
    do {
    printf("Avalie-nos: \n 1 - Satisfeito \n 2 - Indiferente \n 3 - Insatisfeito \n");
    scanf("%d", &opiniao);
    
    switch (opiniao)
        {
    case 1:
        printf("Por favor digite sua idade \n");
        scanf("%d", &idade);
        somaSatisfeito++;
        somaIdadeSatisfeito = somaIdadeSatisfeito + idade;
        break;
    case 2:
        printf("Por favor digite sua idade \n");
        scanf("%d", &idade);
        somaIndiferente++;
        somaIdadeIndiferente = somaIdadeIndiferente + idade;
        break;
    case 3:
        printf("Por favor digite sua idade \n");
        scanf("%d", &idade);
        somaInsatisfeito++;
        somaIdadeInsatisfeito = somaIdadeInsatisfeito + idade;
        break;

    default:
        break;
        } 
    } while (idade != 0);
    
    printf("Total de clientes que opinarao %.2f", somaIndiferente+somaSatisfeito+somaInsatisfeito );
    printf("\nTotal de clientes satisfeitos %.2f", somaSatisfeito);
    printf("\nMedia de idade dos clientes satisfeitos \n %.2f", somaIdadeSatisfeito/somaSatisfeito);
    printf("\nTotal de clientes indiferente \n %.2f", somaIndiferente);
    printf("\nMedia de idade dos clientes indiferente \n %.2f", somaIdadeIndiferente/somaIndiferente);
    printf("\nTotal de clientes insatisfeito \n %.2f", somaInsatisfeito);
    printf("\nMedia de idade dos clientes insatisfeito \n %.2f", somaIdadeInsatisfeito/somaInsatisfeito);
    
    return(0);
}