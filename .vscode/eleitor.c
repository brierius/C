#include <stdio.h>

int main (){
    //variaveis
    int idade;

    //input
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //processamento+output
    if (idade < 16)
    {
        printf("Voce nao pode votar");
    } 
    else 
    {
        if ((idade <18) || (idade > 65)) 
        {
            printf("Seu voto e facultativo");
        }
        else 
        {
            scanf("Seu voto e obrigatorio");
        }
    }       
     return(0);

}
    
