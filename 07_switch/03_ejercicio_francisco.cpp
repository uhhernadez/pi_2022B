//Francisco Ramirez 
#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
    float num1, num2, rsuma, rresta, rmult, rdiv;
    cout<<"\n\nIngresa dos numeros\n"<<endl;
    cout<<"Ingresa el Primero"<<endl;
    cin>>num1;
    cout<<"Ingresa el segundo"<<endl;
    cin>>num2;
    cout<<"Selecciona la operacion que deseas realizar\n\n\n"<<endl;
    cout<<"(+) para suma, (-) para resta, (*) para multiplicacion, y (/) para division"<<endl;
    char op;
    int operacion;
    cin>>op;
    if (op==43)
    {
        operacion = 1;
    }if (op==45)
    {
        operacion = 2;
    }if (op==42)
    {
        operacion = 3;
    }if (op==47)
    {
        operacion = 4;
    }
    switch (operacion)
    {
    case 1:{
        rsuma = num1 + num2;
        cout<<"la suma de "<<num1<<" y "<<num2<<" es igual a "<<rsuma<<endl;
    }break;
    case 2:{
        rresta = num1 - num2;
        cout<<"la resta de "<<num1<<" y "<<num2<<" es igual a "<<rresta<<endl;
    }break;
    case 3:{
        rmult = num1 * num2;
        cout<<"la multiplicacion de "<<num1<<" por "<<num2<<" es igual a "<<rmult<<endl;
    }break;
    case 4:{
        rdiv = num1 / num2;
        cout<<"la division de "<<num1<<" entre "<<num2<<" es igual a "<<rdiv<<endl;
    }break;
    
    default:
    cout<<"Este operador no existe"<<endl;
        break;
    }
    }