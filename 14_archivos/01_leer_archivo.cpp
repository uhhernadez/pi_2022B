#include <fstream>
#include <iostream>
using namespace std;
int main () {
  ifstream entrada("entrada.txt");

  if(!entrada.is_open() ) {
    cout << "El archivo no existe" << endl;
    return 0;
  }
  string str;
  entrada >> str;
  cout << "La primera cadena es: " << str << endl;
  entrada >> str;
  cout << "La segunda cadena es: " << str << endl;
  int entero;
  entrada >> entero;
  cout << "Se pueden leer numeros: " << entero << endl;
  if(entrada.eof()) {
    cout << "El lector del archivo llego al final" << endl;
    return 0;
  }
  return 0;
}