#include <stdio.h>
int main()
{
    /*    
    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x; //<== com o & = endereço da memória, sem o & é o valor da variável

    printf("%i\n", ponteiro);  // <== variavel sem * = endereço na memória
    printf("%i\n", *ponteiro); // <== variável com * = valor do espaço

    */
   
    int x = 10;// x = 10
    int *ponteiro; // criou ponteiro
    ponteiro = &x; // criou endereco na memoria de x

    int y = 20; // atribui valor 20 para y
    *ponteiro = y; // indica que o ponteiro de x recebe o valor de y = 20

    printf("%i %i \n", x, y);
    // getchar();

    return (0);
}