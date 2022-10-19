#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int r = 0;
  float pi = 3.14;

  printf("raio: ");
  scanf("%i", &r);

  //Calcular perimetro = 2pi x r
  float p = 2 * pi * r;
  printf("perimentro= %f \n", p);

  //Calcular area = pi x r2
  float a = pi*pow(r,2);
  printf("area= %f \n", a);

  //calcular volume = ab x h
  printf("altura: ");
  float h = 0;
  scanf("%f", &h);
  float vol = a * h;
  printf("area da base= %f \n", vol);

  return 0;
}

