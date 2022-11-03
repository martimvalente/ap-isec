/******************************************************************************

Escreva um programa que permita resolver a seguinte expressão matemática:

    2*x^4+log(y+x)  se x + y > 20
Z = cos(5*y) - 7   se x + y <= 20 e y > 8
    e^(x+y) / (x*y + 10)  outros casos e x*y != -10

*******************************************************************************/
#include <stdio.h>
#include <math.h> 
const float e = 2.71828;

int main()
{
    int x, y;
    float z = 0;
    
    printf("                    Calculadora de Z");
    printf("\n\nInsira um número inteiro para X e outro inteiro para Y: ");
    scanf("%d %d", &x, &y);
    
    if (x+y > 20)
    {
        z = (2*pow(x,4)) + log10(y+x);
        printf("\nZ = %.2f", z);
    }

    if (x + y <= 20 && y > 8)
    {
        z = cos(5*y) - 7;
        printf("\nZ = %.2f", z);
    }
    
    else
    {
        if (x*y != -10)
        {
            z = pow(e,(x+y)) / (x*y + 10);
            printf("\nZ = %.2f", z);
        }
        
        else
            printf("\nSem soluções possíveis!");
    }

    return 0;
}
