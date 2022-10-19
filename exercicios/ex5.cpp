#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
  int r = 0;
  float pi = 3.14;

  cout << "raio \n" ;
  cin >> r;

//Calcular perimetro = 2pi x r

float p = 2 * pi * r;
cout << "perimentro= " << p << "\n";

//Calcular area = pi x r2
float a = pi*pow(r,2);
cout << "area= " << a << "\n";

//calcular volume = ab x h
  cout << "altura: ";
  float h = 0;
  cin >> h;
  float vol = a * h;
  cout << "area da base= " << vol << "\n";

  return EXIT_SUCCESS; // ou return 0 
}
