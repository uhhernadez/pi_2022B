#include <iostream>
using namespace std;
enum class Semana: int  {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
int main () {
  int d;
  Semana dia = Semana::Lunes;
  cin >> d;
  switch ((Semana)d) {
    case Semana::Lunes: cout << "Lunes" << endl;break;
    case Semana::Martes: cout << "Martes" << endl;break;
    case Semana::Miercoles: cout << "Miercoles" << endl;break;
    case Semana::Jueves: cout << "Jueves" << endl;break;
    case Semana::Viernes: cout << "Viernes" << endl;break;
    case Semana::Sabado: cout << "Sabado" << endl;break;
    case Semana::Domingo: cout << "Domingo" << endl;break;
    default: cout << "Error " << endl; break;
  }
  return 0;
}