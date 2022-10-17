/*
  Objetivo: Determinar si un número es divisible entre 11 y 5.
  Fecha: 12/09/2022
*/
#include <iostream>
using namespace std;
int main () {
  int num;

  cout << "Dame un numero" << endl;
  cin >> num;

  if((num % 5) == 0 && (num % 11) == 0) {
    cout << num <<" es multiplo de 5 y 11 "<< endl;
  } else {
    cout << num << " no es multiplo" << endl;
  }
  return 0;
}