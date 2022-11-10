/******************************************************************************

Escreva um programa que mostre no monitor uma tabela de conversão de Quilómetros para
Milhas. O utilizador deve especificar o valor inicial e final do número de Quilómetros a
converter. No caso de o valor inicial ser 0,5 e o valor final ser 2,0, a tabela deverá ser
apresentada como se mostra a seguir, com um passo de 0,5. Nota: 1 Milha corresponde a 1609
Metros

*******************************************************************************/
#include <stdio.h>
const float milha = 0.621504;

int main()
{
    float Vinicial, Vfinal, milhas;
    float i;
    
    printf("Insira os valores para Km: ");
    scanf("%f %f", &Vinicial, &Vfinal);
    
    i = Vinicial;
    
    printf("  KM     |     Milhas\n");
    
    milhas = i*milha;
    
    while (i <= Vfinal)
    {
        printf(" %.1f           %.4f\n", i, milhas);
        
        i += 0.5;
        milhas = i*milha;
    }
    
    

    return 0;
}
