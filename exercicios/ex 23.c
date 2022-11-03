/******************************************************************************

Escreva um programa que peça três números ao utilizador e os ordene por ordem crescente
ou decrescente consoante a escolha do utilizador

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;
    int a, b, c, maior, medio, menor;
    
    printf("Digite 3 numeros para ordena-los em ordem: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("\nComo deseja ordena-los?");
    printf("\n(0) - Ordem crescente");
    printf("\n(1) - Ordem decrescente\n");
    scanf("%d", &escolha);
    
    while (escolha != 0 && escolha != 1)
    {
        printf("\nOpção invalida, insira novamente:");
        printf("\n(0) - Ordem crescente");
        printf("\n(1) - Ordem decrescente\n");
        scanf("%d", &escolha);
    }

    if (a >= b && a >= c && b >= c)
    {
        maior = a;
        medio = b;
        menor = c;
    }
    
    if (a >= b && a >= c && c >= b)
    {
        maior = a;
        medio = c;
        menor = b;
    }
    
    if (a <= b && c <= b && c >= a)
    {
        maior = b;
        medio = c;
        menor = a;
    }
    
    if (a <= b && c <= b && a >= c)
    {
        maior = b;
        medio = a;
        menor = c;
    }
    
    if (a <= c && c >= b && a >= b)
    {
        maior = c;
        medio = a;
        menor = b;
    }
    
    if (a <= c && c >= b && b >= a)
    {
        maior = c;
        medio = b;
        menor = a;
    }
    
    if (escolha == 1)
        printf("Ordem decrescente = %d %d %d", maior, medio, menor);
    
    else
        printf("Ordem crescente = %d %d %d", menor, medio, maior);

    return 0;
}
