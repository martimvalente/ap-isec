/******************************************************************************

Escreva um programa que pede três números reais ao utilizador e os ordena por ordem crescente.
Se as variáveis se chamarem x, y e z, em x deverá ser colocado o valor mais pequeno e em z o
valor maior. Resolva o problema recorrendo a ponteiros.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, x, y, z, vetor[3], maior, menor, medio;
    
    printf("Insira valores para x, y e z: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("\nX, Y e Z em ordem crescente: ");
    
    if (y > x && y > z && z >= x)
    {
        maior = y;
        medio = z;
        menor = x;
    }
    
    if (y >= x && y >= z && x >= z)
    {
        maior = y;
        medio = x;
        menor = z;
    }
        
    if (x >= y && x >= z && z >= y)
    {
        maior = x;
        medio = z;
        menor = y;
    }
    
    if (x >= y && x >= z && y >= z)
    {
        maior = x;
        medio = y;
        menor = z;
    }
    
    if (z >= y && z >= x && y >= x)
    {
        maior = z;
        medio = y;
        menor = x;
    }
    
    if (z >= y && z >= x && x >= y)
    {
        maior = z;
        medio = x;
        menor = y;
    }
    
    vetor[0] = menor;
    vetor[1] = medio;
    vetor[2] = maior;
    
    for ( i = 0; i <= 2; i++)
        printf("%d   ", vetor[i]);
    

    return 0;
}
