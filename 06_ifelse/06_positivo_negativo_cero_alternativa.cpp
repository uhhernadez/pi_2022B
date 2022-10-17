/*
  Objetivo: programa que determina si un número es positivo
  negativo o cero. 
  Fecha: 12/9/2022
*/
#include <iostream>
using namespace std;
int main () {
  float num;

  cout << "Dame un numero " << endl;
  cin >> num;

  if (num > 0) {
    cout << "Numero positivo" << endl;
  } else if (num < 0) {
    cout << "Numero negativo" << endl;
  } else {
    cout << "El número es cero" << endl;
  }

  return 0;
}