#include <stdio.h>
#include <stdlib.h>

int main(){
  int idade = 0; //declara variavel e inicializa
  
  //ler idade
  printf("Idade: ");
  scanf("%i", &idade); //flag para a input ser um int e apontar para o endereço de memoria
  
  printf("O que, ja tem %i anos? Parece muito mais novo! \n", idade);
  
  return 0;
}
