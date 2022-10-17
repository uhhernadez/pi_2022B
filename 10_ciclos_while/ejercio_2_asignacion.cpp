/*
Descripción: programa que recibe N cantidad de números 
enteros y termina cuando es un valor negativo.
fecha: 13/10/2022
* Cadena a número
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main () {
    string std_num;
    cout << "Dame un número, enter para terminar" << endl;
    float nums = 0;
    float acumulado = 0;
    int std_numint;
    while (true) {
        getline(cin, std_num);
        std_numint = atoi(std_num.c_str());
        if (std_numint < 0) {
          break;
        }
        if(std_num.size() == 0) {
          continue;
        }
        acumulado += std_numint;
        nums++;
    }
    int promedio =  acumulado / nums;  
    cout << "El promedio es " << promedio << endl;

    if (promedio >= 90) {
      cout << "A" << endl;
    }

    if (promedio >=80 && promedio <= 89) {
      cout << "B" << endl;
    }

    if (promedio >=70 && promedio <= 79) {
      cout << "C" << endl;
    }
    
    if (promedio >=60 && promedio <= 69) {
      cout << "D" << endl;
    }

    if (promedio <= 59) {
      cout << "F" << endl;
    }

    return 0;
}