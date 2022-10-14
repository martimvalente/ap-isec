#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int x;
  cout << "Idade: "; // pede idade
  cin >> x; //vai buscar a idade inserida
  cout << "O que, ja tem " << x << " anos? Parece muito mais novo! \n" ;
  return EXIT_SUCCESS; // ou return 0 
}
