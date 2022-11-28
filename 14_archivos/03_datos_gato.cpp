#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
struct Gato {
  string nombre;
  float edad;
  int peso;
};

int main () {
  ifstream entrada("gatos.txt");

  if(!entrada.is_open() ) {
    cout << "El archivo no existe" << endl;
    return 0;
  }
  Gato gato;
  vector<Gato> gatos; 
  while (!entrada.eof()) {
    entrada >> gato.nombre;
    entrada >> gato.edad;
    entrada >> gato.peso;
    gatos.push_back(gato);     
  }
  for (int k = 0; k < gatos.size(); k++) {
    cout << "Nombre: " << gatos[k].nombre 
         << " edad: " << gatos[k].edad
         << " peso: " << gatos[k].peso << endl;
  }
}