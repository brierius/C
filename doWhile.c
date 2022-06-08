/*
do while <== Faça enquanto, é executada pelo menos uma vez e o teste lógico é feito no final

do
{
    operação;
}
while (condicional);

*/

#include <stdio.h>

int main ()
{
    int i;
    char palavra[40];

    printf("Digite uma palavra\n");
    scanf("%s", palavra);
    i=0;

    do
    {
       printf("\n %s", palavra);
       i++;
    } while (i!=10);
    
    return(0);

}