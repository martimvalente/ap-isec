/******************************************************************************

Escreva um programa onde declare duas variáveis do tipo int (de nomes x e y) e um ponteiro para
int (com nome px).
a) Leia valores para x e y. Apresente os valores lidos, mas apenas utilizando o ponteiro px.
b) Leia valores para x e y e apresente os valores lidos, mas apenas utilizando o ponteiro px.
Apresente ainda o endereço das variáveis x e y


*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, px[2];
    
    printf("Insira o valor de x: ");
    scanf("%d", &x);
    printf("Insira o valor de y: ");
    scanf("%d", &y);
    
    px[0] = x;
    px[1] = y;

    printf("\nX = %d e Y = %d", px[0], px[1]);
    
    return 0;
}
