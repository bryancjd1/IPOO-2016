#pragma once
#define MAXFILAS 20
#define MAXCOLS 32
#include "mapa.h"
class mapa3 : public mapa
{
    public:
    void dibujar_mapa();
    char m[MAXFILAS][MAXCOLS] ={
     "XXXXXXXXXXX XXXXX XXXXXXXXXXX",
     "X         X XXXXX X         X",
     "X XXX XXX X XXXXX X XXX XXX X",
     "X XXX XXX X XXXXX X XXX XXX X",
     "X                           X",
     "X XXX XXXXX XX XX XXXXX XXX X",
     "X XXX XXXXX XX XX XXXXX XXX X",
     "X   X                   X   X",
     "XXX X XXX X XX XX X XXX X XXX",
     "X         X XX XX X          ",
     "XXX X XXX X XXXXX X XXX X XXX",
     "X   X                   X   X",
     "X XXX XXXXX XX XX XXXXX XXX X",
     "X XXX XXXXX XX XX XXXXX XXX X",
     "X                           X",
     "X XXX XXX X XXXXX X XXX XXX X",
     "X XXX XXX X XXXXX X XXX XXX X",
     "X         X XXXXX X         X",
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
     "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",

};
     mapa3();

};


