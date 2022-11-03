/******************************************************************************

Escreva um programa que peça cinco valores reais positivos ao utilizador e:
a) Calcule o valor equivalente das 5 resistências montadas em série;
b) Calcule o valor equivalente das 5 resistências montadas em paralelo

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, c, d, e, req1, req2;
    
    printf("Insira 5 valores de resistência para calcular a Req: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    
    req1 = a+b+c+d+e;
    
    req2 = (a*b*c*d*e)/(b*c*d*e + a*c*d*e + a*b*d*e + a*b*c*e + a*b*c*d);
    
    printf("Resistencia equivalente (em serie) = %.2f Ohms", req1);
    printf("\nResistencia equivalente (em paralelo) = %.2f Ohms", req2);

    return 0;
}
