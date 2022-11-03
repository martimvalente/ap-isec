/******************************************************************************

Escreva um programa que peça ao utilizador três variáveis -a, b e c. O valor de a vai para b, o
valor de b para c e o valor de c vai para a. Resolva o problema recorrendo a ponteiros.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[3], aux;
    
    printf("Insira valores para A, B e C. O valor de uma variavel será trocado pelo valor da variável seguinte: ");
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    
    aux = vetor[0];
    vetor[0] = vetor[2];
    vetor[2] = vetor[1];
    vetor[1] = aux;
    
    printf("A = %d, B = %d, C = %d", vetor[0], vetor[1], vetor[2]);

    return 0;
}
