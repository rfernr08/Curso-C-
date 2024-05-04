#include <iostream>

using namespace std;

const float PI = 3.1416;
#define PI_alt 3.1416

float areaCirculo(int radio);
float areaCirculoAlt(int radio);
int main(){
    int radio;
    cout << "Introduce el radio de un circulo a calcular: " << endl;
    cin >> radio;
    cout << "El area del circulo es: " << areaCirculo(radio) << endl;
    cout << "El area del circulo es: " << areaCirculoAlt(radio) << endl;
}

float areaCirculo(int radio){
    return PI * radio * radio;
}

float areaCirculoAlt(int radio){
    return PI_alt * radio * radio;
}