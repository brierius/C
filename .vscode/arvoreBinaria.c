//Bibliotecas
#include <stdio.h>

//Estrutura
struct str_no
{
    char dado; // contem o valor do nó
    int esquerda; // aponta para o filho esquerdo
    int direita; // aponta para o filho direito
    int pai; // aponta para o pai
}

//Constante
#define tamanho 100 // tamanho do vetor

//Variaveis
struct str_no arvore[tamanho]; // cria um vetor com tamanho igual a constante
int indice=0; // cria um indice para acesso do vetor

/* Antes de inserir um no na arvore eu preciso saber que é o pai e se ele é um filho a direita ou a esquerda, 
É filho?
    Se sim
        Direita?
            senão
                Esquerda!
Senão é filho...
    É pai, ou seja, a raiz.
*/
// Procura nó

int arvore_procura(char dado)
{
    if (indice != 0) // se o indice estiver = 0 ele está vazio, neste caso o valor inserido seria a raiz da arvore
    {
        for (int i = 0; i<indice; i++)
        {
            if (arvore[i].dado == dado)
            {
                return(i);
            }
        }
    }
    else 
    {
        return(0);
    }
}

int arvore_insere (int pai, char dado, int lado)
    switch (lado)
    {
    case E:
       arvore[pai].esquerda = indice;
       arvore[indice].dado = dado;
       arvore[indice].pai = pai;
       arvore[indice].esquerda = -1;
       arvore[indice].direira = -1;
       indice++;
    break;

    case D:
        arvore[pai].direita = indice;
        arvore[indice].dado = dado;
        arvore[indice].pai = pai;
        arvore[indice].esquerda = -1;
        arvore[indice].direita = -1;
    break;

    default
        break;
    }
