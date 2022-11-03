/******************************************************************************

Escreva um programa que efectue o cálculo de potências de base real e expoente inteiro,
positivo, negativo ou nulo. Resolva o exercício sem recorrer à função pow().


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    int expoente, i=1;
    double resultado=1;
    
    printf("Insira o valor da Base: ");
    scanf("%f", &base);
    
    printf("Insira o valor do expoente: ");
    scanf("%d", &expoente);
    
    if (expoente > 0)
    {
        while (i <= expoente)
        {
            resultado*=base;
            i++;
        }
        
        printf("O resultado de %.2f ^ %d é %.2lf.", base, expoente, resultado);
    }
    
    if (expoente < 0)
    {
        i = -1;
        
        while (i >= expoente)
        {
            resultado*=base;
            i--;
        }
        
        printf("O resultado de %.2f ^ %d é %.4lf.", base, expoente, (1/resultado));
    }
    
    if (expoente == 0 && base != 0)
        printf("O resultado de %.2f ^ 0 é 1.", base);
    
    if (expoente == 0 && base == 0)
        printf("Não existe 0^0.");
    
    
        
    return 0;
}
