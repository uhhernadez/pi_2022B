#include <fstream>
#include <iostream>
using namespace std;
int main () {
  ifstream entrada("lorem.txt");

  if(!entrada.is_open()) {
    cout << "El archivo no existe" << endl;
    return 0;
  }

  string linea;
  getline(entrada, linea);
  cout << linea << endl;

  while (!entrada.eof()) {
    getline(entrada, linea);
    cout << linea << endl;
  }

  return 0;
}
