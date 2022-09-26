/*
  Descripción: Problema 2.
  Fecha: 26/09/2022 
*/
#include <iostream>
using namespace std;
int main () {
  int N = 6;
  cin >> N;
  for (int i = N ; i > 0; i--) {
    for (int j = 0 ; j < i ; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}