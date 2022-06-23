/* 5Qs do algortimo?
1 - Qual são dos dados de entrada necessários: uma palavra
2 - O que devo fazer  com estes dados: escrevê-la de tras para frente
3 - Quais as restrições do problema: não pode receber números
4 - Qual é o resultado esperado: palavra escrita ao contrario
5 - Qual é a sequência de passos necessários para este fim: 
        criar variavel palavra, i, tam;
        receber a palavra
        criar um for e inverter a sequencia por meio de um for
        printar na tela    
*/
# include <stdio.h>
# include <string.h>

int main ()
{
    int i, tam;
    char palavra[30];

    printf("Digite uma palavra: ");
    gets(palavra);

    tam = strlen(palavra);

    for (i = tam-1; i >=0; i--)
    {
        printf("%c", palavra[i]);
    }
}