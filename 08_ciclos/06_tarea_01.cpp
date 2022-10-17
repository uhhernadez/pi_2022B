/*
  Descripción: Problema 1.
  Fecha: 26/09/2022 
*/
#include <iostream>
using namespace std;
int main () {
  int N = 6;
  cin >> N;
  for (int i = 0 ; i < N; i++) {
    cout << "i = " << i +1 << " ";
    for (int j = 0 ; j < i + 1 ; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}