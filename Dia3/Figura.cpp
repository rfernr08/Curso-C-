#include <iostream>
#include <string>

using namespace std;

class Figura{
    public:
        virtual void area() = 0;
        virtual void toString(int area) = 0;
};

class rectangulo : public Figura{
    private:
        int base;
        int altura;
    public:
        void area(){
            cout << "Introduce la base y la altura del rectangulo " << endl;
            cin >> base;
            cin >> altura;
            toString(base * altura);
        }
        void toString(int area){
            cout << "El area de este rectangulo es " << area << endl;
        }
};

class cuadrado : public Figura{
    private:
        int lado;
    public:
        void area(){
            cout << "Introduce el lado del cuadrado " << endl;
            cin >> lado;
            toString(lado * lado);
        }
        void toString(int area){
            cout << "El area de este cuadrado es " << area << endl;
        }
};

class circulo : public Figura{
    private:
        int radio;
    public:
        void area(){
            cout << "Introduce el radio del circulo " << endl;
            cin >> radio;
            toString(3.1416 * radio * radio);
        }
        void toString(int area){
            cout << "El area de este circulo es " << area << endl;
        }
};

int main(){
    rectangulo rectanguloNuevo;
    rectanguloNuevo.area();
    cuadrado cuadradoNuevo;
    cuadradoNuevo.area();
    circulo circuloNuevo;
    circuloNuevo.area();
}
