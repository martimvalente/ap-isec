/******************************************************************************
Ler números até encontrar um número negativo. Escreve qual o maior número introduzido e
quantas vezes ocorreu.
*******************************************************************************/
#include <stdio.h>
#define TAM 1000

int main()
{
    int n[TAM], i, maior = 0, contamaior = 0, j;
    
    printf("Escreva uma serie de numeros. O programa ira se encerrar ao receber um numero negativo.\n\n");
    
    while (1)
    {
        scanf("%d", &n[i]);
        
        if (n[i] < 0)
            break;
            
        if (n[i] > maior)
            maior = n[i];
        
        i++;
        
    }
    
    for (j = 0; j < TAM; j++)
    {
        if (n[j] == maior)
            contamaior++;
    }
    
    printf("O maior numero e o numero %d, que ocorreu %d vezes.", maior, contamaior);

    return 0;
}
