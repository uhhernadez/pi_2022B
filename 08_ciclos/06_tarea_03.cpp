/*
  Descripción: Problema 3.
  Fecha: 26/09/2022 
*/
#include <iostream>
using namespace std;
int main () {
  int N = 6;
  cin >> N;
  for (int i = 0 ; i < N; i++) {
    for (int j = 0 ; j < i ; j++ ) {
      cout << " ";
    }
    for (int j = 0 ; j < N - i ; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}