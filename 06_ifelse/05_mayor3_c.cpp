#include <iostream>
using namespace std;
int main () {
  float a = 9, b = 10, c = 10, max;
  if ( a >= b && a >= c ) { 
      max = a;      
  }
  
  if ( b >= a && b >= c ) {
      max = b ;      
  }
  
  if ( c >= a && c >= b ) {
      max = c;      
  }
  cout << "El numero mayor es: " << max << endl;
  return 0;
}