#include <iostream>

using namespace std;
float sumar(int a, int b);
float restar(int a, int b);
float multiplicar(int a, int b);
float dividir(int a, int b);

int main(){
    int num1, num2;
    char op;
    cout << "Introduce 2 numeros y despues un operador." << endl;
    cin >> num1;
    cin >> num2;
    cin >> op;
    switch(op){
        case '+':
            cout << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << restar(num1, num2) << endl;
            break;
        case '*':
            cout << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Operador no valido" << endl;
    }
}

float sumar(int a, int b){
    return a + b;
}

float restar(int a, int b){
    return a - b;
}

float multiplicar(int a, int b){
    return a * b;
}

float dividir(int a, int b){
    if(b == 0){
        cout << "No se puede dividir entre 0" << endl;
        return 0;
    }
    return (float) a / b;
}
