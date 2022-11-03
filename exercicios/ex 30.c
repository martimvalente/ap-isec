/******************************************************************************

Escreva um programa que recebe n números inteiros e calcula a soma dos números pares e a
média dos ímpares. Utilize inicialmente o ciclo for, a seguir o ciclo while e por fim o ciclo
do-while.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, somapar=0, somaimpar=0, contaimpar=0;
    
    printf("Digite um numero. O programa sera encerrado quando receber um negativo!\n");
    
    scanf("%d", &N);
    
    while(N>=0)
    {
        
        if (N % 2 == 0)
            somapar+=N;
            
        else
        {
            contaimpar++;
            somaimpar+=N;
        }
        
        scanf("%d", &N);
    }
    
    printf("Soma dos numeros pares: %d\n", somapar);
    printf("Media dos numeros impares: %.2f", (float)somaimpar/contaimpar);

    return 0;
}
