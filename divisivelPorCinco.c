#include <stdio.h>

int main()
{
    // variaveis
    int num;

    // entradas
    printf("Digite um numero...:");
    scanf("%d", &num);
    // processamento
    if (num % 5 == 0)
    
        printf("E divisivel por 5");
    
    else
    
        printf("Nao e divisivel por 5");
        
    return (0);
}