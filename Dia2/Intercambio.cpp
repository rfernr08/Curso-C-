#include <iostream>

using namespace std;

void intercambio(int *a, int *b);
void intercambioDirrecion(int *a, int *b);
void intercambioPorDirrecion(int *a, int *b);
int main(){
    int num1, num2;
    cout << "Introduce 2 numeros" << endl;
    cin >> num1;
    cout << "El primer numero originalmente es: " << num1 << " y dirrecion: " << &num1 << endl;
    cin >> num2;
    cout << "El segundo numero originalmente es: " << num2 << " y dirrecion: " << &num2 << endl;
    intercambio(&num1, &num2);
    cout << " " << endl;
    cout << "El primer numero ahora es: " << num1 << " y dirrecion: " << &num1 << endl;
    cout << "El segundo numero ahora es: " << num2 << " y dirrecion: " << &num2 << endl;
    intercambioDirrecion(&num1, &num2);
    cout << " " << endl;
    cout << "El primer numero ahora es: " << num1 << " y dirrecion: " << &num1 << endl;
    cout << "El segundo numero ahora es: " << num2 << " y dirrecion: " << &num2 << endl;
    cout << " " << endl;
    intercambioPorDirrecion(&num1, &num2);
}

void intercambio(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void intercambioDirrecion(int *a, int *b){
    int* temp = a;
    a = b;
    b = temp;
}
// Las dos primeras funciones cambiaria el valor de las variables usando 
// la dirrecion, la siguiente cambiara la dirrecion para cambiar las variables
// No funciona el ultimo metodo.
/*
void intercambioPorDirrecion(int *a, int *b){
    int* c = a;
    delete(c);
    //&c = a;
    int* d = b;
    int* temp = c;
    c = d;
    d = temp;
    cout << "El primer numero ahora es: " << c << " y dirrecion: " << &c << endl;
    cout << "El segundo numero ahora es: " << d << " y dirrecion: " << &d << endl;
} 
*/