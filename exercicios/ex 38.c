/******************************************************************************

Escreva um programa que peça ao utilizador n números inteiros. Os números lidos devem
estar compreendidos entre 50 e 100. O programa deve ainda apresentar o valor máximo e mínimo
dos n números lidos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, valor, maior = 50, menor = 100, i = 1;
    
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &N);
    
    while ( i < N)
    {
        scanf("%d", &valor);
            while (valor < 50 || valor > 100)
            {
                printf("Os valores devem estar entre 50 e 100, insira novamente: ");
                scanf("%d", &valor);
            }
        
        if (valor > maior)
            maior = valor;
            
        if (valor < menor)
             menor = valor;
        
        i++;
    }
    
    printf("\nMenor valor inserido: %d\n", menor);
    printf("Maior valor inserido: %d", maior);
    
    return 0;
}
