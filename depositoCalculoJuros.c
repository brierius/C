#include <stdio.h>

// deve receber o depósito e calcular juros sobre o mesmo, em seguida apresentar o valor do rendimento e valor total
int main () {
//variaveis
float taxa, deposito, total, rendimentos;

//entradas
printf("Informe o valor a ser depositado: ");
scanf("%f", &deposito);
printf("Informe a taxa de juros: ");
scanf("%f", &taxa);

//processamento
rendimentos = (deposito*taxa)/100;
total = deposito+rendimentos;

//saida
printf("\nO seu depósito foi de: %2.f", deposito);
printf("\nO valor do juros previsto sobre deposito em 30 dias e de: %2.f", rendimentos);
printf("\nO total em conta, já somado os juros de  trinta dias e: %2.f", total);

return(0);
}