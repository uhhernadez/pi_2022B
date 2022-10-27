#include <iostream>
#include <string>
using namespace std;
int main () {
  string nombre = "Ana";
  cout << nombre << endl;

  for (int k = 0; k < nombre.size(); k++) {
    cout << nombre[k] << endl;
  }

  cout << nombre.size() << endl;
}
