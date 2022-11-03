/******************************************************************************

a) Escreva uma função que conhecidos os valores da base maior (B), da base menor (b) e da
altura (h) de um trapézio, calcule e devolva o valor da sua área (A).

Nota: A = ((B+b).h)/2

b) Escreva uma função que conhecidos os valores da área da base (A_Base) e da altura (h_p) de
uma pirâmide, calcule e devolva o valor do seu volume (V). Considere que a base da
pirâmide é um trapézio, usando a função definida em a)

v  = AbaseP * HP / 3


*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    float chamafuncao(float base1, float base2, float altura1)
    {
        float resultado;
        
        resultado = ((base1+base2)*altura1)/2;
        return resultado;
    }
    
float chamafuncao1 (float x, float y)
{
    float retorno1;
    
    retorno1 = x*y/3;
    
    return retorno1;
}

int main()
{
    float basemaior, basemenor, altura, retorno, alturaP, retorno1;
    
    printf("Insira os valores da base maior, da base menor e da altura: ");
    scanf("%f %f %f", &basemaior, &basemenor, &altura);
    
    retorno = chamafuncao (basemaior, basemenor, altura);
    printf("\nA area do trapezio de bases %.1f e %.1f e altura %.1f é %.2fu.a", basemaior, basemenor, altura, retorno);
    
    printf("\nInsira a altura da pirâmide: ");
    scanf("%f", &alturaP);
    
    retorno1 = chamafuncao1(retorno, alturaP);
    printf("\nAltura da piramide de base %.2fu.a e altura %.2f é %.2fu.v", retorno, alturaP, retorno1);
    
    return 0;
}

