/******************************************************************************

Escreva um programa que calcule a força com que dois objectos, de massa m1 e m2, se
atraem quando se encontram à distância d. Os valores das massas e da distância são pedidos
ao utilizador. No caso de algum deles ser negativo o programa deve emitir uma mensagem de
erro e os cálculos não devem ser efectuados. No caso do resultado ser calculado deve ser
apresentado com duas casas decimais.

F = G*(M*m) / pow(d,2)

*******************************************************************************/
#include <stdio.h>
#include <math.h>
const float G = 6.7 * pow(10,-11);

int main()
{
    float M, m, d;
    double F;
    
    printf("Insira o valor da massa M1: ");
    scanf("%f", &M);
    printf("Insira o valor da massa M2: ");
    scanf("%f", &m);
    printf("Insira o valor da distancia D: ");
    scanf("%f", &d);
    
    if (M < 0 || m < 0 || d < 0)
        printf("Os dados não podem ser negativos. A gravidade nao pode ser calculada.");
    
    else
    {
        F = G*(M*m) / pow(d,2);
        
        printf("A gravidade vale %.2lf newtons", F);
    }
    

    return 0;
}
