/*
  Descripción: Programa que recibe N cantidad de números 
  enteros y termina cuando recibe una cadena vacía.
  Fecha: 10 de Octubre 2022
  * Cadena a número
*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main () {
  string std_num;
  cout << "Dame un numero, enter para terminar " << endl;
  float nums = 0;
  float acumulado = 0 ;
  do {
    getline(cin, std_num);
    acumulado += atoi(std_num.c_str());
    //acumulado = acumulado + atoi(std_num.c_str());
    if (std_num.size() != 0 ) {
      nums++;
    }

  } while(std_num.size() != 0);
  float promedio = acumulado / nums;
  cout << " El promedio es " << promedio << endl;
}