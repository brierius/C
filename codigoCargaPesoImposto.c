/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: estado origem, carga caminhão em toneladas, codigo carga
2 - O que devo fazer  com estes dados:converter peso para kilos, preço da carga, taxa imposto sobre kilos, valor total da carga
3 - Quais as restrições do problema: codigo carga e origem existentes
4 - Qual é o resultado esperado: a conversão em kilos, o calculo do valor da carga, do imposto e a soma total
5 - Qual é a sequência de passos necessários para este fim: informar uf, selecionar o codigo da carga 
*/

#include <stdio.h>

int main () {
    int codEstado, codCarga;
    float precoKilo, toneladas, kilos, valorCarga, valorImposto, ValorTotal, taxImposto;

    printf("Digite o codigo do estado de 1-4: ");
    scanf("%d", &codEstado);
    printf("Digite o codigo da carga 10-40: ");
    scanf("%d", &codCarga);
    printf("Digite o total de toneladas da carga: ");
    scanf("%f", &toneladas);

    switch (codEstado)
    {
    case 1:
        taxImposto = 0.15;
        break;
    case 2:
        taxImposto = 0.20;
        break;
    case 3:
        taxImposto = 0.25;
        break;
    case 4:
        taxImposto = 0.30;
        break;
    default:
        printf("Codigo de estado invalido, digite novamente:");
        break;
    }

    if ( codCarga >= 10 && codCarga <= 20) 
    {
        precoKilo = 180;
    }
    else if (codCarga >= 21 && codCarga <= 30) 
    {    
        precoKilo = 120;    
    }
    else if (codCarga >= 31 && codCarga <= 40) 
    { 
        precoKilo = 230;
    }

    else {
        printf("Codigo invalido");
        precoKilo = 0;
    }

    kilos = toneladas * 1000;
    valorCarga = kilos * precoKilo;
    valorImposto = valorCarga * taxImposto;
    ValorTotal = valorImposto+valorCarga;

    printf("O total de kilos e: %.2f\n", kilos);
    printf("O valor total da carga e: %.2f\n", valorCarga);
    printf("O valor do imposto e: %.2f\n", valorImposto);
    printf("O valor total com os impostos somados e: %.2f\n", ValorTotal);

}