/******************************************************************************

O clube de vídeo “Cinema Paraíso” tem quatro categorias de filmes. O preço de aluguer de
cada categoria é dado pela seguinte tabela:
. . . . . . 
Escreva um programa que leia a categoria do filme (N, O, P e B) e o número de dias de atraso.
O programa deve imprimir o relatório:


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escolha;
    int atraso, aluguer;
    float multa, total;
    
    printf("Insira a categoria do filme: ");
    scanf("%c", &escolha);
    printf("Quantos dias o cliente atrasou?: ");
    scanf("%d", &atraso);
    
    switch (escolha)
    {
        case 'n':
        case 'N':
            aluguer = 4;
            multa = 2*atraso;
            total = aluguer + multa;
            break;
        
        case 'o':
        case 'O':
            aluguer = 3;
            multa = 1*atraso;
            total = aluguer + multa;
            break;
            
        case 'p':
        case 'P':
            aluguer = 2;
            multa = 0.8*atraso;
            total = aluguer + multa;
            break;
        
        case 'b':
        case 'B':
            aluguer = 1;
            multa = 0.5*atraso;
            total = aluguer + multa;
            break;
        
        default:
            printf("Codigo invalido, o programa foi encerrado");
            break;
    }
    
    printf("Categoria: %c    |    Aluguer: %d    |    Atraso: %d dias   |    Multa: %.2f euros    |    Total: %.2f euros",
    escolha, aluguer, atraso, multa, total);

    return 0;
}

