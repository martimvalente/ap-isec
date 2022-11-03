/******************************************************************************

Escreva um programa que lê n números inteiros positivos e indique quantos são divisíveis
pelo número cinco. O fim da introdução é sinalizado pela introdução de um número negativo.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, soma=0, divisiveis=0;
    
    scanf("%d", &N);
    if (N<0)
    {
        printf("FIM DO PROGRAMA\nResultados Obtidos:\n");
        printf("1 Numero inserido, e %d são divisiveis por 5", divisiveis);
        return 0;
    }
        soma++;
        if (N % 5 == 0)
            divisiveis++;
    
    while(N >= 0)
    {
        soma++;
        
        if (N % 5 == 0)
            divisiveis++;
        
        scanf("%d", &N);
    }
    
    printf("FIM DO PROGRAMA\nResultados Obtidos:\n");
    printf("%d Numeros inseridos, e %d são divisiveis por 5", soma, divisiveis);

    return 0;
}
