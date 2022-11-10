/******************************************************************************

O restaurante self-service “Come em Pé” dispõe dos seguintes menus:
. . . . 
Escreva um programa que peça ao utilizador o menu pretendido, escreva a designação do
menu e indique o montante a pagar.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escolha;
    
    printf("Insira uma opção do menu, de A a E: ");
    scanf("%c", &escolha);
    
    switch (escolha)
    {
        case 'a':
        case 'A':
            printf("Voce selecionou a opcao PEIXE, que custa 6 euros!");
            break;
        
        case 'b':
        case 'B':
            printf("Voce selecionou a opcao CARNE, que custa 5 euros!");
            break;
        
        case 'c':
        case 'C':
            printf("Voce selecionou a opcao MARISCO, que custa 10 euros!");
            break;
        
        case 'd':
        case 'D':
            printf("Voce selecionou a opcao VEGETARIANO, que custa 8 euros!");
            break;
        
        case 'e':
        case 'E':
            printf("Voce selecionou a opcao MACROBIOTICO, que custa 7 euros!");
            break;
        
        default:
            printf("Opcao invalida");
            break;
    }
    
    return 0;
}
