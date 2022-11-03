#include <iostream>
#include <string>
using namespace std;

int CapturaUnEntero() {
  int retval;
  cout << "Dame un entero \n";
  cin >> retval;
  return retval;
}

int CapturaUnEntero(string mensaje) {
  int retval;
  cout << mensaje <<"\n";
  cin >> retval;
  return retval;
}

int main () {
  int a, b, c, d;
  a = CapturaUnEntero("Dame el valor de a");
  b = CapturaUnEntero();
  c = CapturaUnEntero("Dame el valor de c");
  d = CapturaUnEntero();
  cout << "Los valores son (a,b,c,d): (" 
      << a << ", "<< b << ", " << c << ", " << d << ")\n";
  return 0;  
}
