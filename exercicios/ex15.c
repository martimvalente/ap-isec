#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float y = 0.0, z = 0.0;

  printf("z: ");
  scanf("%f", &z);

  if(z<6){
    y  = pow(z,3) - 10;
  }else{
    y = z * 8;
  }

  printf("%.f \n", y);

  return 0;
}
