/*
Descripción: programa que recibe N cantidad de números 
enteros y termina cuando recibe una cadena vacía.
fecha: 10/10/2022
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
        acumulado += std_numint;
        nums++;
    }
    
    cout << "El promedio es " << (acumulado / nums) << endl;
    return 0;
}