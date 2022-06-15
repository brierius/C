#include <stdio.h>

int main ()
{
    char nome [80], sobrenome[80];
    printf("Digite um nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobrenome);

    strcat(nome, sobrenome); // STR concatena duas variaves juntas ex: Paulo Silva fica PauloSilva
    printf("Apos concatenar as strings temos que nome e %s\n", nome);
    if (strstr(sobrenome, nome)==0)
    {
        printf("Agora sobrenome esta contido na variavel nome. \n");
    }
    strlwr(nome);// STRLWR (lowercase) --> String fica em caixa baixa
    printf("O nome em minusculo e %s\n", nome);
    strupr(nome);// STRUPR (Uppercase) --> String fica em caixa alta211111111111111111111111\
    printf("O nome em maiusculo e %s\n", nome);
    return(0);
}