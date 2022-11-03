/******************************************************************************

6. Considere o menu com as seguintes opções:
OPÇÃO DESIGNAÇÃO
1 Listar
2 Introduzir
3 Eliminar
4 Alterar
5 Terminar
O programa deve terminar quando o utilizador digitar o número 5.
Exemplo, se o utilizador escolher a opção 2 deverá surgir uma mensagem do tipo:
Introduza os novos dados do cliente.
Carregue em ENTER para voltar ao menu.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;
    
    printf("1 - Listar");
    printf("\n2 - Introduzir");
    printf("\n3 - Eliminar");
    printf("\n4 - Alterar");
    printf("\n5 - Terminar\n");
    printf("Insira uma das opcoes: ");
    scanf("%c", &opcao);
    
    switch (opcao)
    {
        case '1':
            printf("\nListe os novos dados do cliente.\nCarregue em ENTER para voltar ao menu.");
            break;
        
        case '2':
            printf("\nIntroduza os novos dados do cliente.\nCarregue em ENTER para voltar ao menu.");
            break;
        
        case '3':
            printf("\nElimine os dados do cliente.\nCarregue em ENTER para voltar ao menu.");
            break;
        
        case '4':
            printf("\nAltere dados do cliente.\nCarregue em ENTER para voltar ao menu.");
            break;
        
        case '5':
            printf("Fim do programa.");
            return 0;
        
        default:
            printf("Código invalido! O programa será encerrado.");
            break;
    }
    
    return 0;
}
