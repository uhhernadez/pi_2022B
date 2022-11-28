#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

struct Dado{
    int caras;
    random_device rd;
    default_random_engine generator;
    
    //Dado (int _caras): generator(rd()) {
    Dado (int _caras): generator(time(0)) {
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
    for (int k=0; k< 10; k++) {
      cout << "dado de veinte " << veinte.Tirar()<<endl;
    }
    return 0;
}