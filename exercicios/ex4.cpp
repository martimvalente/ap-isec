#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

float v1 = 0;

int main(){
  int v2, v3 = 1; //forçar que funcione

  //exercicio 4.1
  v1 = --v1+10;
  cout << "v1=" << v1 << "\n" ;

  //exercicio 4.2
  double x = 6.1, y = 4.8;
  double result = pow(x, y);
  cout << result << "\n" ;
  
  //exercicio 4.3
  float v1 = v2%v3;
  cout << "v1=" << v1 << "\n" ;

  return 0;
}

