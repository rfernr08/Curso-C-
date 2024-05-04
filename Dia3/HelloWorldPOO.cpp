#include <iostream>
#include <string>

using namespace std;

class datos{
    private:
        string nombre;
        int edad;
    public:
        string getEdad(int edad);
        datos(string nombreUsado, int edadUsada){
            nombre = nombreUsado;
            edad = edadUsada;
        }
};

string datos::getEdad(int edad){
    return to_string(2024 - edad);
}

int main(){
    string output = "Hola ";
    int edad;
    string nombre;
    cin >> nombre;
    output.append(nombre);
    cin >> edad;
    datos persona(nombre, 1999);
    output.append(", este año vas a cumplir ");
    output.append(persona.getEdad(edad));
    output.append(" años");
    cout << output << endl;
}

