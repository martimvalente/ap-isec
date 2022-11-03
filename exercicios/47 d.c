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
#include <math.h>

int chamafuncao (int b, int e)
{
    int resultado;
    
    resultado = pow(b,e);
    return resultado;
}

int main()
{
    int base, expoente, retorno;
    
    printf("Insira um valor para a base e um para o expoente: ");
    scanf("%d %d", &base, &expoente);
    
    retorno = chamafuncao(base, expoente);
    printf("%d elevado a %d é %d", base, expoente, retorno);

    return 0;
}
