#include <iostream>
#include <string>

using namespace std;
int main(){
    string output = "Hello ";
    int edad;
    string nombre;
    cin >> nombre;
    output.append(nombre);
    cin >> edad;
    if(edad > 18 && edad < 50){
        output.append(", eres mayor de edad");
    }else if (edad > 50){
        output.append(", eres ya bastante mayor");
    }else{
        output.append(", eres menor de edad");
    }
    cout << output << endl;
}