// Andrea Enid
#include <iostream>
int main () {
  float a; 
  std::cout << "Grados Farenheit : " << std::endl;
  std::cin >> a;
  float b = (a-32)/1.8;
  std::cout << "Grados Farenheit : " << a << "\nCentigrados : " << b;
  return 0;
}