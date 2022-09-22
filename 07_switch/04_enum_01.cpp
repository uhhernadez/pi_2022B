#include <iostream>
using namespace std;
enum Semana {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
int main () {
  int d;
  Semana dia = Lunes;
  cin >> d;
  switch (d) {
    case Lunes: cout << "Lunes" << endl;break;
    case Martes: cout << "Martes" << endl;break;
    case Miercoles: cout << "Miercoles" << endl;break;
    case Jueves: cout << "Jueves" << endl;break;
    case Viernes: cout << "Viernes" << endl;break;
    case Sabado: cout << "Sabado" << endl;break;
    case Domingo: cout << "Domingo" << endl;break;
    default: break;
  }
  return 0;
}