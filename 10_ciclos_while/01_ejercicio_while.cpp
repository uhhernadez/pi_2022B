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
  while (true)  {
    getline(cin, std_num);
    if (std_num.size() == 0 ) {
      break;
    }
    acumulado += atoi(std_num.c_str());
    nums++;
  }
  float promedio = acumulado / nums;
  cout << " El promedio es " << promedio << endl;
}