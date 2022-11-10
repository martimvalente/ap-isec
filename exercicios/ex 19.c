/******************************************************************************

Considere uma fábrica, com um sistema de pesagem de pacotes. Cada pacote é identificado,
para efeitos de cobrança, pelo peso (kg) e volume (cm3). Escreva um programa que permita
calcular o valor a cobrar aos clientes em função das características do pacote, tendo em conta a
seguinte tabela de tarifas. O valor a cobrar deverá ser o maior dos preços, resultante da
avaliação dos dois parâmetros separadamente

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, volume, preco;
    
    printf("Insira o peso do pacote (em kg): ");
    scanf("%f", &peso);
    printf("Insira o volume do pacote (em cm3): ");
    scanf("%f", &volume);
    
    if (peso <= 10)
    {
        if (volume <= 1000)
        preco = 0.9;
        
        if (volume > 1000)
        preco = 1.8;
    }
    
    if (peso > 10 && peso <= 20)
    {
        if (volume <= 1000)
        preco = 1;
        
        if (volume > 1000)
        preco = 1.8;
    }
    
    if (peso > 20)
        preco = 2.2;
        
    printf("O valor final é de %.2f euros.", preco);

    return 0;
}
