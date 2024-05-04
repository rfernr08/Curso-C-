#include <iostream>
#include <string>

using namespace std;

class monitor{
    private:
        bool encendido;
    public:
        void encender(){
            encendido = true;
        }
        void apagar(){
            encendido = false;
        }
};

class cajon{
    private:
        bool abierto; 
        string documento;
    public:
        void abrir(){
            abierto = true;
        }
        void cerrar(){
            abierto = false;
        }
        void imprimir(string documentoIntroducido){
            cout << documentoIntroducido << endl;
        }
};

class tapa{
    private:
        bool abierta;
    public:
        void abrir(){
            abierta = true;
            cout << "Tapa abierta" << endl;
        }
        void cerrar(){
            abierta = false;
            cout << "Tapa cerrada" << endl;
        }
};

class Impresora{
    private: 
        monitor monitorImpresora;
        cajon cajon1;
        cajon cajon2;
        tapa tapa1;
        tapa tapa2;
        tapa tapa3;      
    public:
        void encender(){
            monitorImpresora.encender();
            cajon1.imprimir("Archivo 1");
            cajon2.imprimir("Archivo 2");
            tapa1.abrir();
            tapa2.cerrar();
            tapa3.abrir();
        }
};

int main(){
    Impresora impresoraNueva;
    impresoraNueva.encender();
}