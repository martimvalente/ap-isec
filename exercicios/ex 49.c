/******************************************************************************

Escreva uma função que calcula e devolve o valor de y, sendo o valor de x passado como
argumento. O valor de y é dado pela expressão:

y = -10 x se x <= -10
    x^4 se -10 < x <= 10
    200(x-10) se x > 10 
    

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    
    float chamafuncao (int entrada)
    {
        float resultado;
        
        if (entrada <= 10)
            resultado = -10*entrada;
        
        if (entrada > -10 && entrada <= 10)
            resultado = pow(entrada,4);
        
        if (entrada > 10)
            resultado = 200*(entrada-10);
            
        return resultado;
    }
    
int main()
{
    float x, retorno;
    
    printf("Insira o valor de X: ");
    scanf("%f", &x);
    
    retorno = chamafuncao(x);
    printf("\nO valor de Y é %.2f", retorno);
    
    

    return 0;
}
