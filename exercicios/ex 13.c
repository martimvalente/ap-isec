/******************************************************************************

As coordenadas polares (r,) de um ponto P medem a distância r da origem do eixo x segundo
o ângulo  ao ponto P. As coordenadas polares podem ser convertidas em coordenadas
rectangulares através das relações: x = rcos e y = rsen. Escreva um programa que faça a
conversão das coordenadas polares em rectangulares

*******************************************************************************/
#include <stdio.h>
#include <math.h>

const float pi = 3.1416;

int main()
{
    float x, y;
    int modulo, angulo;
    
    printf("Insira o modulo e o angulo da coordenada: ");
    scanf("%i %i", &modulo, &angulo);
    
    //os compiladores calculam o cosseno do radiano do angulo. Por isso, precisa-se converter de graus para radianos
    
    x = modulo * cos(angulo*pi/180);
    y = modulo * sin(angulo*pi/180);
    
    printf("Em coordenada rectangular: x = %.2f      y = %.2f.", x, y);

    return 0;
}
