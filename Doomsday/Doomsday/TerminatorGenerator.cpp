#include "TerminatorGenerator.h"

using namespace std;


Terminator* TerminatorGenerator::generateTerminator(int tipo){
    if(tipo == 1){
        return new T100();
    }else if(tipo == 2){
        return new T500();
    }else{
        return new T800();
    }
}
