/*
  Descripción: Muestra un renglón con el número de columnas variable.
  Fecha: 26/09/2022 
*/
#include <iostream>
using namespace std;
int main () {
  int N = 6;
  cin >> N;
  for (int i = 0 ; i < N; i++) {
    for (int j = 0 ; j < N ; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}