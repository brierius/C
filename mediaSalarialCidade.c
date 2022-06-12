/*
entradas = salario, numero pessoas e numero de filhos (sal, qPessoas, qFilhos)
saidas = media salarial, media de filhos, maior salario (medSal, medFil, maxSal)
restrição = valor -1 salario encerra leitura
    
while (salario != -1)
    receba quantidade de filhos, 
    receba salario, 

*/
/*
#include <stdio.h>

int main ()
{
    int  qFilhos, somaFilhos, contSalario;
    float medSal, medFilhos, maxSal, salario, somaSalario;

    qFilhos = 0;
    medFilhos = 0;
    medSal = 0;

    printf("Informe salario \n");
    scanf("%f", &salario);

    while (salario != -1)
    {   
        somaSalario = somaSalario + salario;
        contSalario++;
        printf("Digite a quantidade de Filhos \n");
        scanf("%d", &qFilhos);
        somaFilhos++;
        printf("Informe salario \n");
        scanf("%f", &salario);

        //medFilhos = qFilhos / somaFilhos;
        //medSal = somaSalario / contSalario;
    }
    
    printf("A media de filhos e \n %f ", somaFilhos/somaFilhos);
    printf("A media de salario e \n %f ", somaSalario/contSalario); 

    return(0);
}
*/

#include <stdio.h>

int main ()
{
    int filhos, npessoas;
    float salario, somaSalario, somaFilhos, mediaSalario, maiorSalario;

    npessoas = 0;
    somaFilhos = 0;
    somaSalario = 0;
    mediaSalario = 0;

    printf("Informe o salario \n");
    scanf("%f", &salario);
    while (salario != -1)
    {
        printf("Informe o numero de filhos");
        scanf("%d", &filhos);
        npessoas++;
        if (salario > maiorSalario)
            maiorSalario = salario;
        somaFilhos = somaFilhos + filhos;
        somaSalario = somaSalario + salario;

        printf("Informe o salario \n");
        scanf("%f", &salario);    
    }
    
    printf("A media de salarios e %2.f \n", somaSalario/npessoas);
    printf("A media de filhos e %.2f \n", somaFilhos/npessoas);
    printf("O maior salario e %.2f \n", maiorSalario);

    return(0);
}