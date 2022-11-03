/*
  Descripción: Dado un arreglo de diez elementos, dividirlo en dos arreglos de
  cinco elementos cada uno. 
*/
#include <iostream>
#include <vector>
using namespace std;
int main () {
  float origen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  float a[5], b[5];
 
  a[0] = origen[0];
  a[1] = origen[1];
  a[2] = origen[2];
  a[3] = origen[3];
  a[4] = origen[4];
 
  b[0] = origen[5];
  b[1] = origen[6];
  b[2] = origen[7];
  b[3] = origen[8];
  b[4] = origen[9];
  
  for (int i=0, j=5; i<5;i++,j++) {
    a[i]= origen[i];
    b[i]= origen[j];
  }
  for (int k: a) {
    cout << k << " ";
  }
  cout << endl;
  for (int k: b) {
    cout << k << " ";
  }
  
  return 0;
}