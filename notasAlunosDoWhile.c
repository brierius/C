/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: numero de notas da disciplina, notas, codigo aluno
2 - O que devo fazer  com estes dados: calcular a media das notas e informar a quantidade de aprovados e reprovados
3 - Quais as restrições do problema: o programa deve ser zerado ao digitar aluno 0 
4 - Qual é o resultado esperado: a media dos alunos e quantos foram aprovados e não aprovados
5 - Qual é a sequência de passos necessários para este fim: usar a estrutura while, 
        solicitar codigo aluno, notas, disciplinas e se a media ficou acima de 6 = aprovado, menor 6 = reprovado. 
Passos:

Receba a quantidade de notas. qNotas.
Receba o codigo do aluno. codAluno
    Receba as notas. notas.
    Ache a media. media = soma/qNotas.
        Se media >= 6.
        aprovados++
        Senão
        Reprovados++
    codAluno = 0?
    Se sim encerre o programa
        Apresente o total de aprovados e reprovados. 
    Se não repita a sequencia
*/

#include <stdio.h>
int main ()
{
    int qNotas, codAluno, aprovados, reprovados, i;
    float notas, soma, media;

    aprovados =0;
    reprovados = 0;

    printf("Digite a quantidade de notas:\n ");
    scanf("%f", &qNotas);

    printf("Digite o codigo aluno: \n");
    scanf("%d", &codAluno);

    do
    {   
        soma = 0;
        for (i = 1; i <= qNotas; i++)
        {
            printf("Digite a nota: \n");
            scanf("%f", &notas);
            soma = soma+notas;
        }
        media = soma/qNotas;
        if (media >= 6)
            aprovados++;
        else
            reprovados++;
        printf("Digite o codigo de um aluno. 0 Encerra o programa \n");
        scanf("%d", codAluno);
    } while (codAluno != 0);
        printf("Total de provados: %d", aprovados);
        printf("Total de reprovados: %d", reprovados);
    
    return(0);
}