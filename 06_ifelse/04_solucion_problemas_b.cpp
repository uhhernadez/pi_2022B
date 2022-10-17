#include <iostream>
using namespace std;
int main () {
  int respuesta;
  cout << "Tienes un problema?" << endl;
  cout << "1 - Si o 0 - No" << endl;
  cin >> respuesta;

  if(respuesta != 0) {
    cout << "Tiene solucion?" << endl;
    cout << "1 - Si o 0 - No" << endl;
    cin >> respuesta;

    if (respuesta != 0) {
      cout << "Solucionalo" << endl;
      
      cout << "Se soluciono?" << endl;
      cout << "1 - Si o 0 - No" << endl;
      cin >> respuesta;
      if (respuesta != 0) {
        cout << "No te preocupes!" << endl;
      } else {
        cout << "No te preocupes!" << endl;
      }
    } else {
      cout << "No te preocupes!" << endl;
    }
  } else {
    cout << "No te preocupes!" << endl;
  }

  return 0;
}