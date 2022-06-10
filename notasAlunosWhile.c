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
    while (codAluno =! 0){
    Receba as notas. notas.
        soma = 0;
        for (i = 1, nota >= qNotas, nota++ ){
            informe a nota do aluno
            leia nota do aluno}
        Ache a media. media = soma/qNotas.
        Se media >= 6.
        aprovados++
        Senão
        Reprovados++

        Apresente o total de aprovados e reprovados.
    Se não repita a sequencia
*/

#include <stdio.h>
int main()
{
    int qNotas, codAluno, aprovados, reprovados, i;
    float nota, soma, media;

    aprovados = 0;
    reprovados = 0;

    printf("Digite a quantidade de notas:\n ");
    scanf("%d", &qNotas);

    printf("Digite o codigo aluno: \n");
    scanf("%d", &codAluno);

    while (codAluno = !0)
    {
        soma = 0;
        for (i = 1; i <= qNotas; i++)
        {
            printf("Digite a %d nota: \n", i);
            scanf("%f", &nota);
            soma = soma + nota;
        }
        media = soma / qNotas;
        if (media >= 6)
            aprovados++;
        else
            reprovados++;
        printf("Digite o codigo de um aluno. 0 Encerra o programa \n");
        scanf("%d", codAluno);
    
    }

    printf("Total de provados: %d", aprovados);
    printf("Total de reprovados: %d", reprovados);

    return (0);
}