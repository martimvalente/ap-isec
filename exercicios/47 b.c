/******************************************************************************

Escreva uma função para cada uma das situações seguintes. Escreva ainda um pequeno
programa que teste o funcionamento das mesmas.
a) Receba um número real do tipo double e devolva o seu valor absoluto.
b) Receba dois números reais como argumentos e devolva o maior deles.
c) Calcule o quadrado do valor passado como argumento e mostre o resultado.
d) Calcule e devolva potência positiva de um valor inteiro, int potencia (int base, int expoente).
e) Calcule e devolva um valor inteiro, long int potencia(int base, int expoente). Compare o
valor devolvido por esta função com o da alínea anterior para expoentes maiores do que 14.
f) Leia um conjunto de valores inteiros, n e devolva a sua média float media (int n).

*******************************************************************************/
#include <stdio.h>

float chamafuncao (int N1, int N2)
{
    if (N1 > N2)
        return N1;
    
    if (N2 > N1)
        return N2;
    
    if (N2 = N1)
        return 0;
}



int main()
{
    float X, Y, retorno;
    
    printf("Insira 2 valores: ");
    scanf("%f %f", &X, &Y);
    
    retorno = chamafuncao(X, Y);
    
    printf("Maior valor: %.1f", retorno);

    return 0;
}
