#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombres[] = {"Juan", "Pedro", "Luis", "Maria", "Ana", "Xavier"};
    for(auto nombre : nombres){
        if(nombre[0] == 'A' || nombre[0] == 'B' || nombre[0] == 'C' || nombre[0] == 'D' || nombre[0] == 'E' || nombre[0] == 'F'){ 
            cout << nombre + " pertencece a clase A" << endl;
        }else if(nombre[0] == 'G' || nombre[0] == 'H' || nombre[0] == 'I' || nombre[0] == 'J' || nombre[0] == 'K' || nombre[0] == 'L' || nombre[0] == 'M' || nombre[0] == 'N' || nombre[0] == 'O' || nombre[0] == 'P'){
            cout << nombre + " pertencece a clase B" << endl;
        }else{
            cout << nombre + " pertencece a clase C" << endl;
        }
    }
}