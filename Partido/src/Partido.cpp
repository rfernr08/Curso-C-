#include "Partido.h"

Partido::Partido(Equipo local, Equipo visitante, Arbitro arbitro){
    this->local_ = local;
    this->visitante_ = visitante;
}

void Partido::score(Equipo equipo){
    if(equipo == local){
        resultado[0]++;
    }else{
        resultado[1]++;
    }
}

string Partido::getResult(){
    return to_string(resultado[0]) + " - " + to_string(resultado[1]);
}

void Partido::acabarPartido(){
    if(resultado[0] > resultado[1]){
        local_.addGameRecord(this);
        visitante_.addGameRecord(this);
        cout << "El equipo local ha ganado-" << local_.getName() << endl;
    }else{
        visitante_.addGameRecord(this);
        local_.addGameRecord(this);
        cout << "El equipo visitante ha ganado-" << visitante_.getName() << endl;
    }
}