#include <iostream>
using namespace std;
int main () {
  int year;
  cin>>year;
  if(year%4 == 0) {
    cout << "Este year es bisiesto" << endl;
  } else {
    cout << "No lo es" << endl;
  }
  return 0;
}
