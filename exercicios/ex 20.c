/******************************************************************************

Escreva um programa que dado um número inteiro que representa segundos de tempo,
converta esse valor em horas, minutos e segundos.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int s, min, hor, seg;
    
    printf("Insira um tempo em segundos: ");
    scanf("%d", &s);
    
    hor = s / 3600;
    min = (s % 3600) / 60;
    seg = (s % 3600) % 60;
    
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos", s, hor, min, seg);

    return 0;
}
