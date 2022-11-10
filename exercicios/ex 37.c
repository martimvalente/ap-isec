/******************************************************************************

Escreva um programa que peça ao utilizador um valor inteiro (base dez) e o converta para um
valor binário. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, quociente, resto[30], i = 1, contador = 0;
    
    printf("                                 Calculadora Inteiro => Binario");
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &N);
    printf("%d em Binario: ", N);
    
    quociente = N/2;
    resto[0] = N%2;
    
    while (quociente != 0)
    {
        resto[i] = quociente%2;
        quociente = quociente/2;
        i++;
    }
    
    while(i >= 0)
    {
        printf("%d", resto[i]);
        i--;
    }

    return 0;
}
