/*
  Objetivo: Saber si un número es par o impar.
  Fecha: 12/09/2022
*/
#include <iostream>
using namespace std;
int main () {
  int num = 9;

  if (num % 2) {
    cout << num << " es un numero impar" << endl;
  } else {
    cout << num << " es un numero par" << endl;
  }
  return 0;
}