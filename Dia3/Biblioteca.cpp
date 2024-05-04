#include <iostream>
#include <string>

using namespace std;

class Libro{
    private:
        string titulo;
        string autor;
        string id;
        bool prestado; // lo tengo pensado de otra forma, se crea al prestar un libro
        bool prime;
    public:
        Libro(string newTitulo, string newAutor, string newId, bool isPrime){
            titulo = newTitulo;
            autor = newAutor;
            id = newId;
            prestado = false;
            prime = isPrime;
        }
        Libro()
        {     
        }
        void setTitulo(const string newTitulo) {
            titulo = newTitulo;
        }
        string getTitulo() const {
            return titulo;
        }
        void setAutor(const string&newAutor) {
            autor = newAutor;
        }
        string getAutor() const {
            return autor;
        }
        void setId(const string newId) {
            id = newId;
        }
        string getId() const {
            return id;
        }
        void setPrestado(bool newPrestado) {
            prestado = newPrestado;
        }
        bool isPrestado() const {
            return prestado;
        }
        bool isPrime(){
            if(prime == true)
                return true;
            else
                return false;
        }
};

class IPersona{
    private:
        string id;
    public: 
        virtual string getId() = 0;
        virtual void registerPerson() = 0;
        virtual void sacarlibro(Libro libroPrestado) = 0;
        virtual void devolverlibro() = 0;
};

class Empleado : public IPersona{
    private:
        string id;
        string nombre;
        Libro libroSacado;
    public:
        Empleado(string idEmpleado, string nombreEmpleado){
            id = idEmpleado;
            nombre = nombreEmpleado;
        }
        string getId(){
            return id;
        }
        void extendBookTime(){
            cout << "El empleado " << id << " ha extendido el tiempo de un libro" << endl;

        }
        void registerPerson(){
            cout << "Introduce el id del empleado " << endl;
            cin >> id;
        }
        void sacarlibro(Libro libroPrestado){
            libroSacado = libroPrestado;
            cout << "El empleado " << id << " ha sacado un libro" << endl;
            libroPrestado.setPrestado(true);
            Prestamo prestamo("0123", libroPrestado, id, "12/12/2020");
        }
        void devolverlibro(){
            cout << "El empleado " << id << " ha devuelto un libro" << endl;
            libroSacado.setPrestado(false);
        }
};

class Cliente : public IPersona{
    private:
        string id;
        string nombre;
        Libro libroSacado;
    public:
        Cliente(string idCliente, string nombreCliente){
            id = idCliente;
            nombre = nombreCliente;
        }
        string getId(){
            return id;
        }
        void registerPerson(){
            cout << "Introduce el id del cliente " << endl;
            cin >> id;
        }
        void sacarlibro(Libro libroPrestado){
            if(libroPrestado.isPrestado() == true || libroPrestado.isPrime() == true){
                cout << "El libro " << libroPrestado.getTitulo() << " no esta disponible" << endl;
                return;
            }
            libroSacado = libroPrestado;
            cout << "El cliente " << id << " ha sacado el libro " << libroSacado.getTitulo() << endl;
            libroPrestado.setPrestado(true);
            Prestamo prestamo("0123", libroPrestado, id, "12/12/2020");
        }
        void devolverlibro(){
            cout << "El cliente " << id << " ha devuelto el libro" << libroSacado.getTitulo() << endl;
            libroSacado.setPrestado(false);
        }
};

class Prestamo{
    private:
        string id;
        Libro libroPrestado;
        string idPersona;
        string fechaPrestamo;
        int diasPrestamo;
        int contadorDias;
    public:
        Prestamo(string idPrestamo, Libro libroPrestamo, string idPersonaPrestamo, string fechaPrestamoPrestamo){
            id = idPrestamo;
            libroPrestado = libroPrestamo;
            idPersona = idPersonaPrestamo;
            fechaPrestamo = fechaPrestamoPrestamo;
            diasPrestamo = getPrimeTime();
            contadorDias = 0;
        }
        bool isFinished(){
            if(contadorDias > diasPrestamo)
                return true;
            else
                return false;
        }
        int getPrimeTime(){
            if(libroPrestado.isPrime() == true && idPersona.at(0) == '1')
                return 14;
            else
                return 7;
        }
};

int main(){
    Libro A("El Padrino", "Francis Ford Coppola", "8231", true);
    Libro B("El Padrino 2", "Francis Ford Coppola", "8232", false);
    Libro C("El Padrino 3", "Francis Ford Coppola", "8233", true);
    Libro D("El Padrino 4", "Francis Ford Coppola", "8234", false);  
    Empleado empleado1("1234", "Juan");
    Empleado empleado2("1235", "Pedro");
    Cliente cliente1("0236", "Maria");
    Cliente cliente2("0237", "Ana");
    Cliente cliente3("0238", "Luis");
    //cliente1.registerPerson();
    cliente1.sacarlibro(B);
    cliente1.devolverlibro();
    //empleado1.registerPerson(); 
    empleado1.sacarlibro(C);
    empleado1.devolverlibro();
    cliente2.sacarlibro(C);
}

// victor.paniagua.castra@hp.com