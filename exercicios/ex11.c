#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float n, x;

  printf("N:");
  scanf("%f", &n);

  x = log10(n+3) * sqrt(2*M_PI*n) * pow(n/2.718, n);

  printf("x = %f \n", x);

  return 0;  

}
