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
  
  switch (dia) {
    case 1: { 
      cout << "Lunes" << endl;
      break;
    }
    case 2: {
      cout << "Martes" << endl; 
      break;
    }
    case 3: {
      cout << "Miercoles" << endl; 
      break;
    }
    case 4: {
      cout << "Jueves" << endl; 
      break;
    }
    case 5: {
      cout << "Viernes" << endl; 
      break;
    }
    case 6: {
      cout << "Sabado" << endl; 
      break;
    }
    case 7: {
      cout << "Domingo" << endl; 
      break;
    }
    default: {
      cout << "Ese dia no existe" << endl; 
      break;
    }
  }
  return 0;
}