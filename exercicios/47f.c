/******************************************************************************

. Escreva uma função para cada uma das situações seguintes. Escreva ainda um pequeno
programa que teste o funcionamento das mesmas.
a) Receba um número real do tipo double e devolva o seu valor absoluto.
b) Receba dois números reais como argumentos e devolva o maior deles.
c) Calcule o quadrado do valor passado como argumento e mostre o resultado.
d) Calcule e devolva potência positiva de um valor inteiro, int potencia (int base, int expoente).
e) Calcule e devolva um valor inteiro, long int potencia(int base, int expoente). Compare o
valor devolvido por esta função com o da alínea anterior para expoentes maiores do que 14.
f) Leia um conjunto de valores inteiros, n e devolva a sua média float media (int n)

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calculamedia (int vetor1[10])
{
    int i, soma = 0;
    float retorno;
    
    for ( i = 0; i < 10; i++)
        soma += vetor1[i];
    
    retorno = soma / i;
    return retorno;
}


int main()
{
    int vetor[10], i = 0;
    float media;
    
    printf("Insira 10 valores para calcular sua media: ");
    
    do{
        scanf("%d", &vetor[i]);
        i++;
    }
    while (i < 10);
    
    media = calculamedia(vetor);
    printf("A media dos valores inseridos é %.2f", media);
    

    return 0;
}
