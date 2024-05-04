#include <iostream>
#include <string>
#include "Terminator.h"
#include "T100.h"
#include "T500.h"
#include "T800.h"

using namespace std;

class TerminatorGenerator{
    public:
        Terminator* generateTerminator(int tipo);
};