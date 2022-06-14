
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    srand( (unsigned)time(NULL) );
    // 1+random para não gerar resultado 0 e rand ate 5 para que o maximo seja 6 (1+5), simulando 3d6.
    // 3x Random para que a simulacao seja de 3d6 com uma media acima de 9, apenas um random 18 nao há media consistente uma
    // uma vez que qualquer numero tem uma chance em 18 de cair.
    printf("For - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
    printf("Int - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
    printf("Sab - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
    printf("Des - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
    printf("Con - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
    printf("Car - %d\n", (1+rand()%5)+(1+rand()%5)+(1+rand()%5));
}

