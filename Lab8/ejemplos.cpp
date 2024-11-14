#include <iostream>
using namespace std;


void duplicarValor(int &x) { //paso por referencia
  x = x * 2;
  cout << "Dentro de la funcion: " << x << endl;
}

int main() {
  int numero = 5;
  cout << "Antes de llamar a la funcion: " << numero << endl;
  duplicarValor(numero);
  cout << "Despues de llamar a la funcion: " << numero << endl;
  return 0;
}
