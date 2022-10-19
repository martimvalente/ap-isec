#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float v1 = 0;

int main(){
  int v2, v3 = 0;

  //exercicio 4.1
  v1 = --v1+10;
  printf("v1= %f \n", v1);

  //exercicio 4.2
  double x = 6.1, y = 4.8;
  double result = pow(x, y);
  printf("%.2lf", result);
  
  //exercicio 4.3
  float v1 = v2%v3;
  printf("v1=%f \n", v1 );

  return 0;
}
