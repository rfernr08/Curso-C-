#include <iostream>

using namespace std;

static int contador = 1;
void llamadaFuncion();

int main(){
    int limite;
    cout << "Introduce un numero de llamadas a la funcion" << endl;
    cin >> limite;
    while(limite > 0){
        llamadaFuncion();
        limite--;
    }
}

void llamadaFuncion(){
    cout << "Llamada numero: " << contador << endl;
    contador++;
}