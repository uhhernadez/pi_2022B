/*
  Objetivo: Realice un programa que pida dos números, luego que pregunte que
  operación quiere realizar con estos valores. La operación debe de ser
  introducida como un carácter, si esta operación no se puede realizar,
  notifique al usuario, caso contrario realice la operación.
  Fecha: 15/09/2022
*/
#include <iostream>
using namespace std;
int main () {
  float a, b;
  char operacion;
  cout << "Dame dos numeros" << endl;
  cin>> a >> b; 
  cout<<"Selecciona la operacion que deseas realizar"<<endl;
  cout<<"(+) para suma, (-) para resta, (*) para multiplicacion, y (/) para division"<<endl;
  cin >> operacion;
  switch (operacion) {
    case '+': cout << a+b << endl; break;
    case '-': cout << a-b << endl; break;
    case '*': cout << a*b << endl; break;
    case '/': cout << a/b << endl; break;
    default: cout << "Operacion no valida" << endl;  break;
  }
}