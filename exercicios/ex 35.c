/******************************************************************************

a) A figura representa um quadrado de lado L contendo um círculo de raio r = L/2, centrado no
quadrado. Escreva um programa que calcule a área a sombreado. O valor de L deve ser um
valor positivo superior ou igual a 2.

b) Modifique o programa que escreveu em a) de modo a que este funcione ininterruptamente até
o utilizador introduzir o valor zero para o raio. Nessa altura, o programa deve dizer que a
área é zero, e terminar com a mensagem "Bom trabalho!".


*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
const float pi = 3.14;

int main()
{
    float areacirculo=0, raio, areaquadrado=0, areasombreada=0;
    
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    
    while(raio > 0)
    {
        
        areacirculo = pi*(pow(raio,2));
        areaquadrado = pow((raio*2),2);
        
        areasombreada = areaquadrado - areacirculo;
        printf("Valor da Area sombreada: %.2fu.a", areasombreada);
        
        printf("\n\n==============================================================================================================================");
        printf("\n\nO programa foi reiniciado, insira um novo valor para o raio. O programa será encerrado se o raio for negativo ou igual a zero.");
        printf("\nRAIO = ");
        scanf("%f", &raio);
        
    }
    
    printf("\n\n==============================================================================================================================");
    printf("\n\n\nPrograma encerrado. Nao existe Raio menor que zero!");
    
    return 0;
}
