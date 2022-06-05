#include <stdio.h>

int main()
{
    // variaveis
    float num1, num2, num3, maior;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    printf("Digite um numero: ");
    scanf("%f", &num3);

    if ((num1 > num2) && (num1 > num3))
        {
        maior = num1;
        //printf("O maior numero digitado foi: %d", maior);
        }
    else
        {   if (num2 > num3)
        { 
        maior = num2;
        //printf("O maior numero digitado foi: %d", maior);

        }  else
    { 
        maior = num3;
        //printf("O maior numero digitado foi: %d", maior);

    }
    printf("O maior numero digitado foi: %.2f", maior);
    return (0);
    }
    
    
}