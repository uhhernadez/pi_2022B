#include <iostream>
#include <string>
#include <random>

using namespace std;

struct Dado{
    int caras;
    default_random_engine generator;
    
    Dado (int _caras) {
      if (_caras > 3) {
          caras = _caras;
      } else {
          caras = 4;
      }
    }
    
    int Tirar() {
      uniform_int_distribution<int> distribution(1,caras);
      return distribution (generator);
    } 
};

int main()
{
    Dado veinte(20), cuatro(4), seis(6);
    cout << "dado de veinte" << veinte.Tirar()<<endl;
    return 0;
}