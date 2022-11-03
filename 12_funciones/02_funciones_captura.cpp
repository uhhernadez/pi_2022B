#include <iostream>
using namespace std;

int CapturaUnEntero() {
  int retval;
  cout << "Dame un valor entero \n";
  cin >> retval;
  return retval;
}

int main () {
  int a, b, c, d;
  a = CapturaUnEntero();
  b = CapturaUnEntero();
  c = CapturaUnEntero();
  d = CapturaUnEntero();
  cout << "Los valores son (a,b,c,d): (" 
      << a << ", "<< b << ", " << c << ", " << d << ")\n";
  return 0;  
}
