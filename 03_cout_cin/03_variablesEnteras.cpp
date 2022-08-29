#include <iostream>
int main() {
  char a;
  int b;
  float c;
  double d;
  std::string e;

  std::cout << "Dame un caracter " << std::endl;
  std::cin >> a;
  std::cout << "Dame un entero " << std::endl;
  std::cin >> b;
  std::cout << "Dame un flotante " << std::endl;
  std::cin >> c;
  std::cout << "Dame un double " << std::endl;
  std::cin >> d;
  std::cout << "Dame una cadena de texto" << std::endl;
  std::cin >> e;
  std::cout << "char " << a << " int " << b << " float " << c 
            << " double " << d << " string " << e << std::endl; 

  return 0;
}