/******************************************************************************

Escreva um programa para calcular o somatório seguinte:
ZZZ

Resolva o problema utilizando o ciclo while, do-while e for.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 2; 
    float soma = 0;
    
    for (i; i <= 25; i++)
        soma += pow((i+(pow(i,2)/2)+(i/3)),2);
        
    printf("Soma = %.2f", soma);

    return 0;
}
