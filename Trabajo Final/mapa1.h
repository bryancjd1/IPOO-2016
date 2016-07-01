#pragma once
#define MAXFILAS 20
#define MAXCOLS 32
#include "mapa.h"
class mapa1 : public mapa
{
    public:
    void dibujar_mapa();
    char m[MAXFILAS][MAXCOLS] ={
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
     "X           XXXXX X X X     X",
     "X XXX XXXXX       X X X XXX X",
     "X     XXXXX XXXXX X X X XXX X",
     "X XXX                       X",
     "X     XX XXXXXXXXXXX XX XXXXX",
     "XXX X XX     XXX     XX     X",
     "X X X XXXXXX XXX XXXXXX XXX X",
     "XXX X XX             XX XXX XX",
     "X        XXXXXXXXXXX XX      ",
     "XXX X XX XXXXXXXXXXX    XXXXXX",
     "X X X XX             XX X   X",
     "XXX X XX XXX XXX XXX XX XXXXX",
     "X     XX     XXX     XX     X",
     "X XXX XX XXXXXXXXXXX XX XXX X",
     "X                           X",
     "X XXX XXXX XXXXXXXX XXX XXX X",
     "X XXX XXXX          XXX XXX X",
     "X          XXXXXXXX         X",
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",

};
     mapa1();
};
