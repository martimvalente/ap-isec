/******************************************************************************

Escreva um programa que leia um número inteiro e indique se o número é par ou ímpar. Se o
número for par deve indicar se é múltiplo de 10.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    
    printf("                            Calculadora de paridade.");
    printf("\nInsira um numero para começar: ");
    scanf("%d", &N);
    
    if (N%2 == 0)
    {
        if (N%10 == 0)
            printf("O numero %d e par e divisivel por 10", N);
        
        else
            printf("O numero %d e par", N);
    }
    
    else
        printf("O numero %d e impar", N);

    return 0;
}
