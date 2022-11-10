#include <iostream>
#include <string>
using namespace std;

struct Gato {
  string nombre;
  float edad;
  string color;
};


void MuestraInformacion (string nombre, float edad, string color) {
  cout << "Nombre: " << nombre << " edad: " << edad << " color: " << color << endl;
}
Gato CrearGato(string nombre, float edad, string color) {
  Gato g;
  g.nombre = nombre;
  g.edad = edad;
  g.color = color;
  return g;
}

void MostrarGato(Gato g) {
  cout << "Nombre: " <<g.nombre<< " edad: "<< g.edad << " color: " << g.color << endl;
}

void Maulla(Gato &g) {
  if (g.edad < 12) {
    cout << "Miiiiaaau" << endl;
  } else {
    cout << "           __..--''``---....___   _..._    __         " << endl;
    cout << " /// //_.-'    .-/ ;  `        ``<._  ``.''_ `. / // /" << endl;
    cout << "///_.-' _..--.'_    \\                    `( ) ) // // " << endl;
    cout << "/ (_..-' // (< _     ;_..__               ; `' / ///  " << endl;
    cout << " / // // //  `-._,_)' // / ``--...____..-' /// / //   " << endl;
  }
}

void Envejecer(Gato &g, float tiempo) {
  g.edad += tiempo;
}

int main () {
  Gato gato1, gato2, gato3;
  gato1 = CrearGato("Lea", 1, "cafe");
  gato2 = CrearGato("Aurora", 3, "blanco");
  gato3 = CrearGato("Delailah", 3, "naranja");
  MostrarGato(gato1);
  MostrarGato(gato2);
  MostrarGato(gato3);
  Envejecer(gato1, 9.5);
  MostrarGato(gato1);
  Maulla(gato1);
}