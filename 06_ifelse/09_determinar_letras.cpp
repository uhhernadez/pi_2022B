/*
  Objetivo: Determinar si un caracter es una letra o un número.
  Fecha: 12/09/2022
*/
#include <iostream>
using namespace std;
int main () {
  char c = 122;
  
  if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122)  ) {
    cout << "El caracter '" << c << "' es una letra" << endl;
  } else {
    cout << "El caracter '" << c << "' es un símbolo" << endl;
  }

  return 0;
}