/******************************************************************************

Escreva um programa que peça ao utilizador os valores de x e y e calcule o valor de z, sendo
este dado pela seguinte expressão: ...........

*******************************************************************************/
#include <stdio.h>
#include <math.h>
const float e = 2.71828;

int main()
{
    float x, y;
    double resultado;
    
    printf("Insira valores de x e y: ");
    scanf("%f %f", &x, &y);
    
    resultado = (pow(x,5) - log(pow(e, y - pow(x,4)))) / ((sin(x) + atan(sqrt(y*x))));
    
    printf("O resultado da equação é: %.3lf", resultado);

    return 0;
}
