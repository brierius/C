#include <stdio.h>
#include <string.h>

// tamanho da pilha
#define TAMANHO_ 10
#define LIMITE_ 40

// structs - registros da pilha
typedef struct
{
    int tam;
    int lim;
    char dado[1 + TAMANHO_][LIMITE_];

} Pilha;

// push - coloca um elemento na pilha // pop tira um elemento da pilha
int POP(Pilha*);
int PUSH(const char*, Pilha*);
int TOP(Pilha*,char*);

int mostra(Pilha*, const char*);

// programa
int main(void)
{
    const char* teste[] =
    { 
    //vetor de pratos    
    "Vermelho","Verde","Azul","Branco","Laranja"
    };
    Pilha orig = {.tam = 0, .lim = TAMANHO_};
    mostra(&orig, "\nTeste: Pilha vazia");
    int res   = 0;
    int n_tst = sizeof(teste) / sizeof(teste[0]);
    for (int i = 0; i < n_tst; i += 1)
    {
        res = PUSH((const char*)teste[i], &orig);
        if (res < 1) break;
    }
    mostra(&orig, "\nTeste: Pilha original");
    printf(
        "\nTirando os elementos e colocando na outra "
        "pilha:\n\n");
    Pilha reversa = {.tam = 0, .lim = TAMANHO_};
    char  el[LIMITE_];
    for (int i = orig.tam; i > 0; i -= 1)
    {
        TOP(&orig, el);
        POP(&orig);
        PUSH(el, &reversa);
    }
    mostra(&orig, "\nAo final: pilha original");
    mostra(&reversa, "\nAo final: Nova Pilha");
    return 0;
}


//pop tira um elemento na pilha
int POP(Pilha* p)
{
    if (p == NULL) return -1;
    if (p->tam == 0) return -2;
    p->tam -= 1;
    return p->tam;
}

// push coloca um elemento na pilha
int PUSH(const char* val, Pilha* p)
{
    if ((p == NULL) || (val==NULL)) return -1;
    if (strlen(val) > LIMITE_ - 1) return -2; // nao cabe
    p->tam += 1;
    if (p->tam > p->lim)
    {
        p->tam -= 1;
        return -3;
    }
    strcpy(p->dado[p->tam], val);
    return p->tam;
}

int TOP(Pilha* p, char* val)
{
    if ((p == NULL) || (val == NULL)) return -1;
    if (p->tam == 0) return -2;
    strcpy(val, p->dado[p->tam]);
    return 0;
}

int mostra(Pilha* p, const char* tit)
{
    if (p == NULL)
    {
        printf("pilha invalida\n");
        return -1;
    }
    if (tit != NULL) printf("%s\n", tit);
    if (p->tam == 0)
    {
        printf("Pilha vazia (cap:%d):\n", p->lim);
        return 0;
    }
    printf("%d elementos (cap:%d):\n", p->tam, p->lim);
    for (int i = 1; i < p->tam; i += 1)
        printf("\t%s\n", p->dado[i]);
    printf("\t%s\n\n", p->dado[p->tam]);
    return 0;
}