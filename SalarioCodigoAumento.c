/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: Salario atual, codigo do cargo
2 - O que devo fazer  com estes dados: Comparar o codigo do cargo e atribuir o percentual de aumento
3 - Quais as restrições do problema: salario e codigo inexistente
4 - Qual é o resultado esperado: Atribuir o aumento e imprimir o cargo, codigo, valor do aumento e novo salario
5 - Qual é a sequência de passos necessários para este fim: 
    receber o salario
    receber cargo
    receber codigo
    atribuir aumento percentual
    imprimir na tela cargo, salario, valor aumento e novo salario
*/

#include <stdio.h>

int main (){
    float salario, novoSalario, valorAumento, percentual;
    int op;

    printf("Escolha o cargo: \n1 - Servente\n2 - Pedreiro\n3 - Mestre de Obras\n4 - Tecnico de Seguranca\n");
    scanf("%d", &op);
    printf("Digite o salario: ");
    scanf("%f", &salario);

    switch (op)
    {
    case 1:
        printf("O cargo escolhido e Servente\n");
        percentual = 0.40;
        break;
    case 2:
        percentual = 0.35;
        printf("O cargo escolhido e Pedreiro\n");

        break;
    case 3:
        percentual = 0.20;
        printf("O cargo escolhido e Mestre de Obras\n");
        break;
    case 4:
        percentual = 0.10;
        printf("O cargo escolhido e Tecnico em Seguranca\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

    valorAumento = salario*percentual;
    novoSalario = salario+valorAumento;

    printf("O Salario escolhido foi: %.2f\n", salario);
    printf("O aumento foi de: %.2f\n", valorAumento);
    printf("O o novo salario e: %.2f\n\n", novoSalario);

    return(0);
}