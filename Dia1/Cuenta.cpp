#include <iostream> 

using namespace std;

int main(){
    int cuentaAtras = 10;
    cout << "Empezamos cuenta" << endl;
    while(cuentaAtras > 0){
        cout << cuentaAtras << endl;
        cuentaAtras--;
    }

    cout << "Finalizado" << endl;
}