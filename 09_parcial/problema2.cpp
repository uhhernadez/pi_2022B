#include <iostream>
using namespace std;
int main () {
  char c;
  cin >> c;
  switch(c) {
    case '0': cout << "cero" << endl; break;
    case '1': cout << "uno" << endl;break;
    case '2': cout << "dos" << endl;break;
    case '3': cout << "tres" << endl;break;
    case '4': cout << "cuatro" << endl;break;
    case '5': cout << "cinco" << endl;break;
    case '6': cout << "seis" << endl;break;
    case '7': cout << "siete" << endl;break;
    case '8': cout << "ocho" << endl;break;
    case '9': cout << "nueve" << endl;break;
    default: cout << "No es un numero" << endl;break;
  }
}