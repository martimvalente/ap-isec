/******************************************************************************

Escreva um programa que resolva o seguinte problema: “Qual o menor número natural tal
que se retirarmos o algarismo das unidades e o colocarmos do lado esquerdo obtemos um número
4 vezes maior”.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char N[4];
    int j, i, numerointeiro, quadruplo;
    
    for (i = 0; i <= 9; i++)
    {
        for ( j = 0; j <= 9; j++)
        {
            N[0] = i;
            N[1] = j;
            
            numerointeiro = (10*i) + j;
            quadruplo = (10*j) + i;
            
            if ((4*numerointeiro) == quadruplo)
                printf("N = %d", numerointeiro);
        }
    }

    return 0;
}
