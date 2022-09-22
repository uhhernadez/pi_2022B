#include <iostream>
enum Semana {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
int main () {
  Semana dia = Lunes;
  switch (dia) {
    case Lunes: cout << "Lunes" << endl;break;
    case Martes: break;
    case Miercoles: break;
    case Jueves: break;
    case Viernes: break;
    case Sabado: break;
    case Domingo: break;
    default: break;
  }
  return 0;
}