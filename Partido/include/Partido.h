#include <string>
//#include "Equipo.h"
#include "Arbitro.h"
class Partido{
    private:
        int resultado[2] = {0,0};
        Equipo local_;
        Equipo visitante_;
    public:
        Partido(Equipo local, Equipo visitante);
        void score(Equipo equipo);
        string getResult();
        void acabarPartido();
};