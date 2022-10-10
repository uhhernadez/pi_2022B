#include <iostream>
using namespace std;
int main () {
  float a = 9, b = 10, c = 10;
  if ( a < b ) {
    if ( a < c ) {
      cout << "El numero menor es: " << a << endl;      
    }
  }
  
  if ( b < a ) {
    if ( b < c ) {
      cout << "El numero menor es: " << b << endl;      
    }
  }
  
  if ( c < a ) {
    if ( c < b ) {
      cout << "El numero menor es: " << c << endl;      
    }
  }


}
