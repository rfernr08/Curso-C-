#include <iostream>
#include <memory>
using namespace std;

const int arraySize = 5;

int main() {
    unique_ptr<int[]> arr(new int[arraySize]);

    for (int i = 0; i < arraySize; ++i) {
        arr[i] = i + 1;
    }
    
    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += arr[i];
    }
   
    cout << "La suma de todos los elementos del arreglo de tamaño " << arraySize <<  " es: " << sum << std::endl;

    return 0;
}