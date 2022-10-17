#include <iostream>
using namespace std;
int main () {
  bool condicion = 10 == 4;
  cout << "El valor de la condicion: " << condicion << endl;
  if ( condicion ) {
    cout << "Bloque de codigo cuando es VERDADERA la condicion\n";
  } else  {
    cout << "Bloque de codigo cuando es FALSA la condicion\n";
  }
  return 0;
}