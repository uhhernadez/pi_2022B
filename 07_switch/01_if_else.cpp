/*
  Objetivo: Mostrar en la pantalla el día de la semana de acuerdo a un número.
  Fecha: 15/09/2022
*/
#include <iostream>
using namespace std;
int main () {
  int dia = 1;
  cout << "Dame el numero del dia de la semana" << endl;
  cin >> dia;
  if (dia == 1) {
    cout << "Lunes" << endl;
  } else if (dia == 2) {
    cout << "Martes" << endl; 
  } else if (dia == 3) {
    cout << "Miercoles" << endl;
  } else if (dia == 4) {
    cout << "Jueves" << endl;
  } else if (dia == 5) {
    cout << "Viernes" << endl;
  } else if (dia == 6) {
    cout << "Sabado" << endl;
  } else if (dia == 7) {
    cout << "Domingo" << endl;
  } else {
    // Por defecto o default
    cout << "Ese dia no existe" << endl;
  }
}
