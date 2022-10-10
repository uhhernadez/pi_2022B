#include <iostream>
using namespace std;
enum Meses {Enero = 1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre };
int main () {
  int d;
  Meses mes = Enero;
  cin >> d;
  switch (d) {
    case Enero: cout << "Enero" << endl;break;
    case Febrero: cout << "Febrero" << endl;break;
    case Marzo: cout << "Marzo" << endl;break;
    case Abril: cout << "Abril" << endl;break;
    case Mayo: cout << "Mayo" << endl;break;
    case Junio: cout << "Junio" << endl;break;
    case Julio: cout << "Julio" << endl;break;
    case Agosto: cout << "Agosto" << endl;break;
    case Septiembre: cout << "Septiembre" << endl;break;
    case Octubre: cout << "Octubre" << endl;break;
    case Noviembre: cout << "Noviembre" << endl;break;
    case Diciembre: cout << "Diciembre" << endl;break;
    default: break;
  }
  return 0;
}
