#include <iostream>
using namespace std;
int main () {
  float a = 9, b = 10, c = 10;
  if ( a > b ) {
    if ( a > c ) {
      cout << "El mayor numero es: " << a << endl;      
    }
  }
  
  if ( b > a ) {
    if ( b > c ) {
      cout << "El mayor numero es: " << b << endl;      
    }
  }
  
  if ( c > a ) {
    if ( c > b ) {
      cout << "El mayor numero es: " << c << endl;      
    }
  }
  return 0;
}