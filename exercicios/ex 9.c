/******************************************************************************

Escreva um programa que peça dois números reais ao utilizador e calcule a sua soma,
diferença, divisão e multiplicação

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Digite dois numeros reais: ");
    
    float x, y, soma, divisao, subt, mult;
    
    scanf("%f %f", &x, &y);
    
    soma = x + y;
    subt = x - y;
    mult = x*y;
    divisao = x/y;
    
    printf("Soma entre x e y = %.2f\n", soma);
    printf("Diferenca entre x e y = %.2f", subt);
    printf("\nMultiplicacao entre x e y = %.2f", mult);
    printf("\nDivisao entre x e y = %.2f", divisao);

    return 0;
}
