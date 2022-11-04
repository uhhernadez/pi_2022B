/*
  Descripción: Convierte un número a una letra de calificación.
*/
#include <iostream>
using namespace std;

void ConvierteUnNumeroALetra(float calificacion) {
  if (calificacion >= 90) {
    cout << "A" << endl;
  } else if (calificacion >=80 && calificacion < 90 ) {
    cout << "B" << endl;
  } else if (calificacion >=70 && calificacion < 80 ) {
    cout << "C" << endl;
  } else if (calificacion >=60 && calificacion < 70 ) {
    cout << "D" << endl;
  } else if (calificacion < 60){
    cout << "F" << endl;
  }
}

char ConvierteUnNumeroALetraReturn(float calificacion) {
  if (calificacion >= 90) {
    return 'A';
  }
  if (calificacion >=80 && calificacion < 90 ) {
    return 'B';
  } 
  if (calificacion >=70 && calificacion < 80 ) {
    return 'C';
  }
  if (calificacion >=60 && calificacion < 70 ) {
    return 'D';
  }
  if (calificacion < 60){
    return 'F';
  }
  return 'X';
}


int main () {
  float calificacion = 67;
  //ConvierteUnNumeroALetra(calificacion);
  ConvierteUnNumeroALetraReturn(89);
  char letra = ConvierteUnNumeroALetraReturn(89);
  cout <<"La calificacion es :"<< letra << endl;
}