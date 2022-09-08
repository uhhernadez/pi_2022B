#include <iomanip>
#include <iostream>
using namespace std;
int main () {
  //const double PI = 3.141592653589793238462;
  const double PI = 3.14;
  cout << fixed;
  cout << setprecision(1) << PI << endl; 
  cout << setprecision(2) << PI << endl; 
  cout << setprecision(3) << PI << endl; 
  cout << setprecision(4) << PI << endl; 
  cout << setprecision(5) << PI << endl; 
  cout << setprecision(10) << PI << endl; 
  return 0;
}