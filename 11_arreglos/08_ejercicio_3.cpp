#include <iostream>
#include <vector>
using namespace std;
int main () {
  int arreglo1[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arreglo2[10];

  arreglo2[9] = arreglo1[0];
  arreglo2[8] = arreglo1[1];
  arreglo2[7] = arreglo1[2];
  arreglo2[6] = arreglo1[3];
  arreglo2[5] = arreglo1[4];
  arreglo2[4] = arreglo1[5];
  arreglo2[3] = arreglo1[6];
  arreglo2[2] = arreglo1[7];
  arreglo2[1] = arreglo1[8];
  arreglo2[0] = arreglo1[9];

  for (int k=0; k< 10; k++) {
    arreglo2[9-k] = arreglo1[k];
  }
  return 0;  
}
