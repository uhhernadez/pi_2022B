/*
  Descripción: Inicializar y mostrar un arreglo bidimensional.
*/
#include <iostream>
#include <vector>
using namespace std;
int main () {
  float imagen[5][5] = {
    {1, 2, 3 ,4, 5},
    {1, 2, 3, 4, 5},
    {0, 0, 100, 0, 0},
    {5, 4, 3, 2, 1},
    {-100, 4, 3, 2, 1}
  };
  int mayor = imagen[0][0];
  int menor = imagen[0][0];
  for (int m = 0; m < 5; m++) {
    for(int n = 0; n < 5; n++) {
      if(mayor < imagen[m][n]) {
        mayor = imagen[m][n];
      }
      if (menor > imagen[m][n]) {
        menor = imagen[m][n];
      }
    }
  }
  cout << "El numero mayor " << mayor << endl;
  cout << "El numero menor " << menor << endl;
  return 0;
}
