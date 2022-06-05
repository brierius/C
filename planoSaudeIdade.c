#include <stdio.h>

int main()
{
    // variaveis
    char nome;
    float idade;

    // input
    printf("Digite seu nome...:");
    scanf("%s", &nome);
    printf("Digite sua idade...:");
    scanf("%f", &idade);

    //printf("Nome: %s\n", nome);
    //printf("Idade: %f\n", idade);
    
    if (idade <= 18)
    {
        printf("O valor do seu plano e R$50,00");
    } else{
        if ((idade >= 19) && (idade <= 29)){
            printf("O valor do seu plano e R$70,00");

        } else {
            if ((idade >= 30)&&(idade <= 45)){
            printf("O valor do seu plano e R$90,00");
            } else {
                if ((idade >= 46) && (idade <= 65 )){
                printf("O valor do seu plano e R$130,00");
            } else {
                printf("O valor do plano e R$170,00");
            }
            }
            }
        }
    
            

    return (0);
}