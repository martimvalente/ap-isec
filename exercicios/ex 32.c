/******************************************************************************

Escreva um programa que calcule as raízes de um polinómio de segundo grau
O programa deverá pedir os valores de a, b e c e calcular as raízes x1 e x2
reais, se existirem. O programa será executado enquanto a condição
DELTA >= 0 se verificar. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    double raiz1, raiz2;
    
    printf("Insira os valores de A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b,2) - (4*a*c);
    
    if (delta < 0)
    {
        printf("Impossivel calcular.");
        return 0;
    }
    
    else
    {   
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        
        printf("\nRaizes da equacao: X' = %.3lf e X"" = %.3lf", raiz1, raiz2);
    }
    
    return 0;
}
