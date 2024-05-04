#include <iostream>
#include <string>

using namespace std;

template <class T, class S>
class Pair{
    private:
        T a_;
        S b_;
    public:
        Pair(T a, S b){
            this->a_ = a;
            this->b_ = b;
        } 
        T getA(){
            return a_;
        }
        S getB(){
            return b_;
        }
        void setA(T a){
            this->a_ = a;
        }
        void setB(S b){
            this->b_ = b;
        }
};

int main (){
    int a = 5;
    string b = "Hola";
    Pair ejemplo(a, b);
    cout << ejemplo.getA() << " " << ejemplo.getB() << endl;
    ejemplo.setA(10);
    ejemplo.setB("Adios");
    cout << ejemplo.getA() << " " << ejemplo.getB() << endl;
}
