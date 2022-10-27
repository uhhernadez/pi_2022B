#include <iostream>
#include <vector>
using namespace std;
int main () {
  int nums[20] = {
    1, 2, -3, 4, 8, 9, -2, 3 , 7, -33,
    -78, 0, -8, 21, 37, -0, 5, 17, -41, 5
  };
  int positivos = 0, 
      negativos = 0, 
      pares = 0,  
      impares = 0, 
      ceros = 0;

  for (int n: nums) {
    if ( n >-1) {
      positivos++;
    } else {
      negativos++;
    }
    if ( n%2 == 0) {
      pares++;
    } else {
      impares++;
    }

    if( n == 0) {
      ceros++;
    }
  }

  cout << "Pares: " << pares << "\n";
  cout << "Impares: " << impares << "\n";
  cout << "Positivos: " << positivos << "\n";
  cout << "Negativos: " << negativos << "\n";
  cout << "Ceros: " << ceros << "\n";
  return 0;
}