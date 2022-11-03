/******************************************************************************

O Parque de Estacionamento “Estou Bem Parado” cobra 2,5 €/ hora de permanência do
veículo. Escreva um programa que leia os horários de entrada e saída de um veículo (hora e
minuto) e calcule o total a pagar. Se o veículo permanecer mais que cinco horas estacionado é
oferecida uma lavagem automática. O programa deve informar o utilizador se tal situação se
verificar.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Hentrada = 1, Hsaida = 0, tempototal;
    float valor;
    
    while(Hentrada >= Hsaida)
    {
        printf("Hora de entrada: ");
        scanf("%d", &Hentrada);
        
        printf("Hora de saida: ");
        scanf("%d", &Hsaida);
        
        if (Hentrada >= Hsaida)
            printf("ERRO.................... O horario de entrada deve ser menor que o de saida!\n\n");
    }
    
    tempototal = Hsaida - Hentrada;

    valor = 2.5 * tempototal;
    
    printf("\nValor a ser cobrado = %.2f euros", valor);
    
    if (tempototal > 5)
        printf("\nBONUS: Voce recebeu uma lavagem gratis!!!!");

    return 0;
}
