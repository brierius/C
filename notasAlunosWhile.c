/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: numero de notas da disciplina, notas, codigo aluno
2 - O que devo fazer  com estes dados: calcular a media das notas e informar a quantidade de aprovados e reprovados
3 - Quais as restrições do problema: o programa deve ser zerado ao digitar aluno 0 
4 - Qual é o resultado esperado: a media dos alunos e quantos foram aprovados e não aprovados
5 - Qual é a sequência de passos necessários para este fim: usar a estrutura while, 
        solicitar codigo aluno, notas, disciplinas e se a media ficou acima de 6 = aprovado, menor 6 = reprovado. 
*/

#include <stdio.h>
int main ()
{
    int codAluno, i, numAprov, numReprov, numNotas;
    float nota, soma, media;

    numAprov = 0;
    numReprov = 0;
    printf("Informe o numero de notas da disciplina\n");
    scanf("%d", &numNotas);

    do
    {
        printf("Informe o codigo do aluno\n");
        scanf("%d", &codAluno);
        soma = 0;
        if (codAluno != 0)
        {
            for ( i = 1; i<= numNotas; i++)
            {
            printf("Digite a nota\n");
            scanf("%d", &nota);
            soma = soma+nota;
            }
            
            media = soma/numNotas;
            printf("Media %.2f\n", media);
            
            if (media >= 6 )
                numAprov++;  
            else
                numReprov++;
        }
            
         
       } while (codAluno != 0);
       printf("O numero de alunos aprovados foi: %d\n", numAprov);
       printf("O numero de alunos reprovados foi: %d\n", numReprov);
       return(0);
    
    {

    }
}