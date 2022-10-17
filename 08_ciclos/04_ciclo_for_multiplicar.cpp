/*
  Descripción: Tabla de multiplicar.
  Fecha: 22/09/2022 
*/
#include <iostream>
using namespace std;
int main () {
  float n = 3;
  cout << n <<" x " << 1 << " = " << n*1 << "\n";
  cout << n <<" x " << 2 << " = " << n*2 << "\n";
  cout << n <<" x " << 3 << " = " << n*3 << "\n";
  cout << n <<" x " << 4 << " = " << n*4 << "\n";
  cout << n <<" x " << 5 << " = " << n*5 << "\n";
  cout << n <<" x " << 6 << " = " << n*6 << "\n";
  cout << n <<" x " << 7 << " = " << n*7 << "\n";
  cout << n <<" x " << 8 << " = " << n*8 << "\n";
  cout << n <<" x " << 9 << " = " << n*9 << "\n";
  cout << n <<" x " << 10 << " = " << n*10 << "\n";

  for (int i = 1; i <= 10; i++) {
    cout << n <<" x " << i << " = " << n*i << "\n";
  }
  return 0;
}