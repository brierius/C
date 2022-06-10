/*
Apresentar todos os numeros divisiveis por tres em 100;

*/

#include <stdio.h>

int main ()
{
    int i;

    for( i = 3; i < 100; i = i+3)
    {
        printf(" - Multiplos de 3 \n%d", i);
    }
    return(0);
}