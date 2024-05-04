#include <iostream>
#include <thread>
#include <string>

using namespace std;

void printMessage(string message){
    cout << message << endl;
}

int main(){
    thread t1(printMessage, "Hello Wordl");
    thread t2(printMessage, "My name is _");
    //t1 = thread
    t1.join();
    t2.join();
    return 0;
}