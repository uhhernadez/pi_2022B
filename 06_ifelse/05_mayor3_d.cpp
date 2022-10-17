#include <iostream>
using namespace std;
int main () {
  float a = 9, b = 10, c = 10, max;
  if(a > b) {
    if(a > c) {
      cout << "El numero mas grande es: "<< a << endl;
    } else {
      cout << "El numero mas grande es: "<< b << endl;
    }
  } else { 
    if ( b > c) {
      cout << "El numero mas grande es: "<< b << endl;
    } else {
      cout << "El numero mas grande es: "<< c << endl;
    }
  }

  return 0;
}