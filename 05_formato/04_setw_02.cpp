#include <iomanip>
#include <iostream>
using namespace std;
int main () {
  int espacio = 15;
  cout << setw(espacio) << 234.23423<< endl;
  cout << setw(espacio) << 2323432.3243 << endl;
  cout << setw(espacio) << 4 << endl;
  cout << setw(espacio) << .4543 << endl;
  cout << setw(espacio) << 87 << endl;
  return 0;
}