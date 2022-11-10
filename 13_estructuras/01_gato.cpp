#include <iostream>
#include <string>
using namespace std;

struct Gato {
  string nombre;
  float edad;
  string color;
};


void MuestraInformacion (string nombre, float edad, string color) {
  cout << "Nombre: " << nombre << " edad: " << edad << " color: " << color << endl;
}

int main () {
  Gato gato1, gato2, gato3;
  gato1.color = "rojo";

  string nombre_gato1 = "Lea", nombre_gato2 = "Aurora", nombre_gato3 ="Delailah";  
  float edad_gato1 = 1, edad_gato2 = 3, edad_gato3 = 3;
  string color_gato1 = "cafe", color_gato2 = "blanco", color_gato3 = "naranja"; 

  string nombres[] = {"Lea", "Aurora", "Delailah"};
  float edades[] = {1, 3, 3};
  string colores[] = {"cafe", "blanco", "naranja"};
  for (int k = 0; k < 3; k++) {
    MuestraInformacion(nombres[k], edades[k], colores[k]);
  }


  MuestraInformacion(nombre_gato1, edad_gato1, color_gato1);
  MuestraInformacion(nombre_gato2, edad_gato2, color_gato2);
  MuestraInformacion(nombre_gato3, edad_gato3, color_gato3);

  /*
  cout << "Nombre : " << nombre_gato1
       << " edad: " << edad_gato1 
       << " color: " << color_gato1 << endl; 
  
  cout << "Nombre : " << nombre_gato2
       << " edad: " << edad_gato2 
       << " color: " << color_gato2 << endl; 
  
  cout << "Nombre : " << nombre_gato3
       << " edad: " << edad_gato3 
       << " color: " << color_gato3 << endl; 
  */
}