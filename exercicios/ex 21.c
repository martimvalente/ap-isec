/******************************************************************************

Escreva um programa que leia três comprimentos e indique se essas linhas podem constituir
um triângulo

Considerando lado1, lado2 e lado3 o comprimento das três linhas, elas podem formar um
triângulo se: |lado1-lado2| < lado3 e lado3 < lado1+lado2

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    
    printf("Insira os 3 lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (abs(a-b) < c && c < a + b)
        printf("Os 3 pontos formam um triangulo!");
    
    else 
        printf("Impossivel formar um triangulo com os pontos fornecidos");

    return 0;
}
