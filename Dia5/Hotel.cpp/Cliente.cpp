#include <iostream>
#include <string>
#include "Hotel.cpp"

using namespace std;

class Cliente {
private:
    std::string nombre;

public:
    Cliente(std::string nombre) : nombre(nombre) {}
    void checkIn(Hotel* hotel) {
        cout << "Hola Sr./Sra. " << nombre << ". Espero que su estancia en "; 
        hotel->getDirection(); 
        cout << " sea agradable" << endl;
    }
};

int main() {
    Hotel* hotel = Hotel::getInstance();
    Cliente* cliente = new Cliente("Juan");
    cliente->checkIn(hotel);

    Cliente* cliente2 = new Cliente("Maria");
    cliente2->checkIn(hotel);

    return 0;
}