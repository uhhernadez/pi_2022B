/*
  Descripción: Escribir un programa que sume todos los elementos de un arreglo.
  Escribir un programa que haga el producto de todos los números en el arreglo.
*/
#include <iostream>
#include <vector>
using namespace std;
int main () {
  float arreglo[] = {8, 34, 34, 1, 2, 9, 4, 34, 9, 34, 2, 45};
  float suma = arreglo[0] + arreglo[1] + arreglo[2] + arreglo[3] 
            + arreglo[4] + arreglo[5] + arreglo[6] + arreglo[7] 
            + arreglo[8] + arreglo[9] + arreglo[10] + arreglo[11];
  float multiplicacion = arreglo[0] * arreglo[1] * arreglo[2] * arreglo[3] 
            * arreglo[4] * arreglo[5] * arreglo[6] * arreglo[7] 
            * arreglo[8] * arreglo[9] * arreglo[10] * arreglo[11];
  float aux = 0.0;
  float mux = 1.0;
  for (int k : arreglo) {
    aux += k; // aux = aux + arreglo[k];
    mux *= k; // mux = mux * arreglo[k];
  }      
   
  cout << "La suma de todos los valores es: " << aux << " suma: " << suma << endl;    
  cout << "La multiplicacion de todos los valores es: " << mux << " multiplicacion: " << multiplicacion << endl;    
  return 0;
}