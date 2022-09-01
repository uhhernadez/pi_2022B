#include <iostream>
//Francisco
int main (){
    float num, cuad, cub;

    std::cout << "Numero: " << std::endl;
    std::cin >> num;
    cuad= (num*num);
    cub= (num*num*num);
    std::cout << "El numero es: "<< num << "\ncuadrado: "<< cuad << "\ncubo: " << cub << std::endl;
    return 0;
}