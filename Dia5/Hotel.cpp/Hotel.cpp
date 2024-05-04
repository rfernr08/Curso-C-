
#include <iostream>
#include <string>
using namespace std;

class Hotel{
    private:
        static Hotel* hInstance;
        Hotel(){
        }
    public:
        static Hotel* getInstance(){
            if(hInstance == nullptr){
                hInstance = new Hotel();
            }
            hInstance = new Hotel();
            return hInstance;
        }
        void getDirection(){
            cout << hInstance << endl;
        }
};

Hotel* Hotel::hInstance = nullptr;
