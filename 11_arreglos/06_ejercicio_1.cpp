/*
  Objetivo: Pedir al usuario 10 valores y luego pedir un valor adicional.
  Usando el último valor, para buscarlo en la lista y mostrar si existe o no.
*/
#include <iostream>
#include <vector>
using namespace std;

int main () {
  int nums[10];
  int valor;

  for (int k=0; k < 10; k++) {
    cout << "Dame un número : ";
    cin >> nums[k];
  }
  cout << "Dame el valor a buscar " << endl;
  cin >> valor;

  bool existe = false;
  for (int n: nums) {
    if ( n == valor) {
      existe = true;
    }
  }

  if (existe) {
    cout << "El valor esta contenido en el arreglo" << endl;
  } else {
    cout << "El valor no esta en el arreglo" << endl;
  }


}