#pragma once
#define MAXFILAS 20
#define MAXCOLS 32
#include "mapa.h"
class mapa2 : public mapa
{
    public:
    void dibujar_mapa();
    char m[MAXFILAS][MAXCOLS] ={
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
     "X           XXXXX           X",
     "X XXX XXXXX       XXXXX XXX X",
     "X XXX XXXXX XXXXX XXXXX XXX X",
     "X                           X",
     "X XXX XX XXXXXXXXXXX XX XXX X",
     "X     XX     XXX     XX     X",
     "X XXX XXXXXX XXX XXXXXX XXX X",
     "X XXX XX             XX XXX XX",
     "         XXXXXXXXXXX XX      ",
     "X XXX XX XXXXXXXXXXX    XXX XX",
     "X XXX XX             XX XXX X",
     "X XXX XX XXX XXX XXX XX XXX X",
     "X     XX     XXX     XX     X",
     "X XXX XX XXXXXXXXXXX XX XXX X",
     "X XXX                   XXX X",
     "X XXX XXXX XXXXXXXX XXX XXX X",
     "X XXX XXXX          XXX XXX X",
     "X          XXXXXXXX         X",
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",

};
     mapa2();

};

