#include <iostream>
int main (){
    float farenheit1;
    std::cout <<"Temperatura en Farenheit : ";
    std::cin >>farenheit1;
    std::cout <<"Celsius : " << (farenheit1-32.0f)/1.8 << "\n";
}