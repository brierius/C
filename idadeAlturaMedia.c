/*
Algoritmo que recebe idade e altura, calcula e apresenta a media de altura e idade.
Programa se encerra ao digitar 0 para idade.
entradas = idade, altura;
variaveis = somaIdade, somaAltura, numeroPessoas;
saida = totalPessoas, mediaIdade, mediaAltura;
*/

#include <stdio.h>

int main ()
{
    int idade, numeroPessoas,totalPessoas;
    float altura, somaAltura, mediaIdade, somaIdade, mediaAltura;

    numeroPessoas = 0;
    somaAltura = 0;
    somaIdade = 0;
    totalPessoas = 0;
    
    printf("Informe a idade, 0 encerra o programa \n");
    scanf("%d", &idade);
    
    while (idade != 0)
    {    
        printf("Informe a altura \n");
        scanf("%f", &altura);
        numeroPessoas++;
        somaIdade = somaIdade + idade;
        somaAltura = somaAltura + altura;
    
        printf("Informe a idade, 0 encerra o programa \n");
        scanf("%d", &idade);
    }

    printf("O total de pessoas entrevistadas foi: %2.d \n", numeroPessoas);
    printf("A media de altura das pessoas entrevistadas e %.2f \n", somaAltura/numeroPessoas);
    printf("A media de idade das pessoas entrevistadas e %.2f \n", somaIdade/numeroPessoas);

    return(0);

}

