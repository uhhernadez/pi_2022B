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
    {0, 0, 0, 0, 0},
    {5, 4, 3, 2, 1},
    {5, 4, 3, 2, 1}
  };
  for (int m = 0; m < 5; m++) {
    for(int n = 0; n < 5; n++) {
     cout << imagen[m][n] << " "; 
    }
    cout << endl;
  }
  return 0;
}
